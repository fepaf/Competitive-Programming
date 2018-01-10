#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MOD 1000000007
#define MAX 100123
#define INF 0x3f3f3f3f
#define MAXT 52
#define ii pair<ll,ll>
#define vi vector<int>
#define vvi vector<vi>
#define vii vector<ii>
#define vvii vector<vii>
#define eb emplace_back
#define pb push_back
#define fs first
#define sc second
#define ll long long

using namespace std;

struct competidor{
    string nome,pos;
    int rating, new_rating, in_contest, in_upsoving, tempo, fez;
};

ifstream OldRank, Placar;
ofstream NewRank;
string arqPlacar, arqOldRank, arqNewRank;
vector<competidor> membros, contestantes;
int total_problemas;

string justifica(string s, int t){
    string ans = "";
    for (int i=0; i<(t-(int)s.size()); i++){
        ans+=' ';
    }
    return ans+s;
}

bool cmp(competidor a, competidor b){
    return a.new_rating > b.new_rating;
}

int findCompetidor(string nome){
    for (int i=0; i<(int)membros.size(); i++){
        if (membros[i].nome == nome) return i;
    }
    return -1;
}

int getRatingIniciante(){
    int t = membros.size();
    return (t & 1 ? membros[t/2].rating : (membros[t/2].rating+membros[(t/2)-1].rating)/2);
}

void getMembros(){
    string nome,pos;
    int rating;

    while (OldRank>>pos){
        OldRank>>nome>>rating;
        membros.pb({nome,pos,rating,0,0,0,0,0});
    }
}

void getNovosMembros(){
    string nome, participou;
    int in_contest, in_upsoving, tempo, ind, ratingIniciante = getRatingIniciante();

    while (Placar>>nome){
        Placar>>in_contest>>tempo>>in_upsoving>>participou;
        if ((ind = findCompetidor(nome))!=-1){
            membros[ind].in_contest = in_contest;
            membros[ind].in_upsoving = in_upsoving;
            membros[ind].tempo = tempo;
            membros[ind].fez = (participou == "[X]");
        }
        else{
            membros.pb({nome, "", ratingIniciante, 0, in_contest, in_upsoving, tempo, (participou == "[X]")});
        }
    }
}


double embate(competidor a, competidor b){
    double esperanca, fato, ra, rb, baloes_A, baloes_B;
    ra = a.rating;
    rb = b.rating;
    baloes_A = a.in_contest + (a.in_upsoving/3.0) + (a.in_contest == total_problemas);
    baloes_B = b.in_contest + (b.in_upsoving/3.0) + (b.in_contest == total_problemas);

    esperanca = 1.0/(1.0+pow(10,(rb-ra)/400.0));

    if (baloes_A != baloes_B){
        fato = baloes_A/(baloes_A + baloes_B);
    }
    else if (a.in_contest != b.in_contest){
        fato = (1.0*a.in_contest)/(a.in_contest + b.in_contest);
    }
    else if (a.tempo && b.tempo){
        fato = (1.0*b.tempo)/(a.tempo + b.tempo);
    }
    else {
        fato = a.fez;//nunca entra aqui?
    }

    return (fato-esperanca);
}

double GetNewRating(competidor membro){
    double ganho = 0;

    for (auto adversario : membros){
        if (adversario.nome == membro.nome || !adversario.fez) continue;
        ganho += embate(membro, adversario);
    }

    if (!membro.fez && ganho<0){
        ganho = (membro.in_upsoving/3)/32.0;
    }

    return (membro.rating+(membro.rating > 2000 ? 16 : 32)*ganho);
}

void EloSystem(){
    int just = 0;

    for (auto &membro : membros){
        membro.new_rating = GetNewRating(membro);
        just = max(just, (int)membro.nome.size());
    }

    stable_sort(membros.begin(), membros.end(), cmp);

    int pos = 1;
    for (auto &membro : membros){
        membro.rating = membro.new_rating;
        cout<<(pos<10 ? "0" : "")<<pos<<": "<<justifica(membro.nome, just)<<" "<<membro.rating<<endl;
        NewRank<<(pos<10 ? "0" : "")<<pos<<": "<<justifica(membro.nome, just)<<" "<<membro.rating<<endl;
        ++pos;
    }
}

int main(){

    for (int contest = 1; contest<=14; contest++){
        total_problemas = 7 + (contest%5==0);
        arqOldRank = "rankgeral"; arqOldRank += to_string(contest-1); arqOldRank += ".txt";//trocar essa extensao
        arqPlacar = "placar"; arqPlacar += to_string(contest); arqPlacar += ".txt";
        arqNewRank = "rankgeral"; arqNewRank += to_string(contest); arqNewRank += ".txt";

        OldRank.open(arqOldRank); NewRank.open(arqNewRank); Placar.open(arqPlacar);

        if (!(OldRank || NewRank || Placar)){
            cout<<"falha na abertura"<<endl;
            exit(1);
        }

        getMembros();

        getNovosMembros();

        EloSystem();

        OldRank.close(); NewRank.close(); Placar.close(); membros.clear();
    }


    return 0;
}
