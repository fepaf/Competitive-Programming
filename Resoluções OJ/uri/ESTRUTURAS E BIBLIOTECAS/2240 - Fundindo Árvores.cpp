// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Fundindo Árvores
// Nível: 5
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2240

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define vi vector<int>
#define pb push_back
#define MAX 101234

using namespace std;

int n,m,esq,cent,dir,ans,u,last;
vi rabo[2],pai,lenght[2];

int main(){_
    cin>>n;
    pai = vi(n+1,0);
    for (int i=n;i--;){
        cin>>u>>esq>>cent;
        pai[cent]=u;
        if (!cent){
            rabo[0].pb(u);
        }
    }
    for (int u : rabo[0]){
        int v;
        lenght[0].pb(1);
        last = lenght[0].size()-1;
        for (v = u; pai[v]; v = pai[v]){
            ++lenght[0][last];
        }
        if (v == 1){
            swap(lenght[0][last],lenght[0][0]);
        }
    }

    cin>>m;
    pai = vi(m+1,0);
    for (int i=m;i--;){
        cin>>u>>cent>>dir;
        pai[cent]=u;
        if (!cent){
            rabo[1].pb(u);
        }
    }
    for (int u : rabo[1]){
        int v;
        lenght[1].pb(1);
        last = lenght[1].size()-1;
        for (v = u; pai[v]; v = pai[v]){
            ++lenght[1][last];
        }
        if (v == 1){
            swap(lenght[1][last],lenght[1][0]);
        }
    }

    ans = 0;
    for (int i = 0; i<(int)lenght[1].size(); i++){
        ans = max(ans,min(lenght[0][0],lenght[1][i]));
    }
    for (int i = 0; i<(int)lenght[0].size(); i++){
        ans = max(ans,min(lenght[1][0],lenght[0][i]));
    }
    ans = n+m-ans;
    cout<<ans<<endl;
    return 0;
}

