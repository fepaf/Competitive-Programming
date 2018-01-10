#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MOD 1000000007
#define MAX 100123
#define INF 0x3f3f3f3f
#define MAXT 52
#define ii pair<ll,ll>
#define vs vector<string>
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
    int rating, baloes, upsolved, tempo, fez;
};

vs argumenta(string linha){
    vs ans;
    stringstream ss;
    string word;

    for (ss<<linha; ss>>word;){
        ans.eb(word);
    }
    ss.clear();

    return ans;
}

string justifica(string s, int t){
    string ans = "";
    for (int i=0; i<(t-(int)s.size()); i++){
        ans+=' ';
    }
    return ans;
}

string remove_blank(string s){
    string ans="";
    for (int i=0; i<(int)s.size(); i++){
        if (s[i]!=' ') ans+=s[i];
    }
    return ans;
}


int main(){
    ifstream entrada;
    ofstream saida;
    stringstream ss;
    string linha, pos, nome, word, arqEntrada, arqSaida;
    int balao, up, tempo_acumulado, tempo_accepted, just, submissoes, no;
    vs argumentos;
    vector<competidor> membros;

    for (no=1; no<=14; no++){
        if (no==12) continue;

        arqEntrada = "codepit"; arqEntrada += to_string(no); arqEntrada += ".txt";
        arqSaida = "placar"; arqSaida += to_string(no); arqSaida += ".txt";


        entrada.open(arqEntrada); saida.open(arqSaida);

        just = 0;
        if (entrada && saida){
            while (getline(entrada,pos)){
                balao = up = tempo_acumulado = 0;

                getline(entrada,nome);
                nome = remove_blank(nome);
                just = max(just, ((int)nome.size()));

                while (getline(entrada,linha)){
                    argumentos = argumenta(linha);
                    if (argumentos.size()==2) break;

                    if (argumentos.size()==0) continue;

                    submissoes = atoi(linha.c_str());

                    getline(entrada,linha);
                    if (linha != "--"){
                        tempo_accepted = atoi(linha.c_str());
                        if (tempo_accepted <= 120){
                            tempo_acumulado += (tempo_accepted + (submissoes-1)*20);
                            ++balao;
                        }
                        else{
                            ++up;
                        }
                    }

                }
                membros.pb({nome,pos,0,balao,up,tempo_acumulado,(tempo_acumulado!=0)});
            }

            for (auto membro : membros){
                cout<<justifica(membro.nome, just)<<membro.nome;
                cout<<setw(3)<<membro.baloes;
                cout<<setw(5)<<membro.tempo;
                cout<<setw(3)<<membro.upsolved;
                cout<<" "<<(membro.fez ? "[X]" : "[-]");
                cout<<endl;

                saida<<justifica(membro.nome, just)<<membro.nome;
                saida<<setw(3)<<membro.baloes;
                saida<<setw(5)<<membro.tempo;
                saida<<setw(3)<<membro.upsolved;
                saida<<" "<<(membro.fez ? "[X]" : "[-]");
                saida<<endl;
            }

        }
        else {
            cout<<"falha na abertura"<<endl;
        }
        entrada.close(); saida.close(); membros.clear();
    }
    return 0;
}
