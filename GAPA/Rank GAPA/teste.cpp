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
        cout<<'_';
    }
    cout<<endl;
    return ans;
}


int main(){
    ifstream entrada;
    ofstream saida;
    stringstream ss;
    string linha, pos, nome, word;
    vs argumentos;
    vector<competidor> membros;

    while (cin>>word){
        cout<<justifica(word,10)<<word<<endl;
    }

    return 0;
}
