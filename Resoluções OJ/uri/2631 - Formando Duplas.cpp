// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Formando Duplas
// Nível: 5
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2631

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define INF 0x3f3f3f3f
#define MAX 100123
#define pb push_back
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define vvii vector<vii>
#define vvi vector<vi>
#define is pair<int,string>
#define fs first
#define sc second

using namespace std;

int n,m,q,a,b,pai[MAX],caso;

void init(int t){
    for (int i=t+1;i--;){
        pai[i]=i;
    }
}

int id(int x){return (pai[x]!=x ? pai[x]=id(pai[x]) : pai[x]);}

void join(int u, int v){
    pai[id(v)]=id(u);
}

signed main(){_
    while (scanf("%i %i %i",&n,&m,&q)!=EOF){
        init(n+1);
        while (m--){
            scanf("%i %i",&a,&b);
            join(a,b);
        }
        if (caso++) cout<<endl;
        while (q--){
            scanf("%i %i",&a,&b);
            cout<<(id(a)==id(b) ? 'S' : 'N')<<endl;
        }
    }
}

