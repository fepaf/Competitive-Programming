// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Fuga do Cavalo
// Nível: 3
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1147

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define UNVISITED -1
#define VISITED 1
#define vi vector<int>
#define vvi vector<vi>
#define eb emplace_back

using namespace std;

int ans,teste,a,b;
string moves,peao,cavalo;
vvi tab;

int main(){_
    while ((cin>>cavalo)&&(cavalo!="0")){
        tab = vvi(10,vi(10,1));
        for (int i=8;i--;){
            cin>>peao;
            tab[peao[0]-'0'-1][peao[1]-'a'] = 0;
            tab[peao[0]-'0'-1][peao[1]-'a'+2] = 0;
        }
        a = cavalo[0]-'0'; b = cavalo[1]-'a'+1;
        ans = 0;
        for (int i=1; i<=8; i++){
            for (int j=1; j<=8; j++){
                ans += ((a-i)*(a-i)+(b-j)*(b-j)==5)*tab[i][j];
            }
        }
        cout<<"Caso de Teste #"<<++teste<<": "<<ans<<" movimento(s)."<<endl;
    }
    return 0;
}

