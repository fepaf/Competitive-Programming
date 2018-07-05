// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Tipos Analógimôn
// Nível: 2
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2562

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define INF 0x3f3f3f3f
#define MAX 1002
#define EPS (1e-7)
#define MOD 1000000007
#define UNVISITED -1
#define VISITED 1
#define ull unsigned long long
#define ll long long
#define ii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vu vector<ull>
#define vs vector<string>
#define vl vector<ll>
#define vvi vector<vi>
#define vii vector<ii>
#define vvii vector<vii>
#define vd vector<double>
#define qi queue<int>
#define fs first
#define sc second
#define pb push_back
#define mp make_pair

using namespace std;

int n,m,e,tam[MAX],pai[MAX],a,b;

void init(int n){
    for (int i=0;i<n;i++) pai[i]=i , tam[i]=1;
}

int id(int n){ return (pai[n]!=n ? pai[n]=id(pai[n]) : pai[n]);}

void join(int u, int v){
    u=id(u) , v=id(v);
    if (u==v) return;
    if (tam[u]<tam[v]) swap(u,v);
    pai[v]=u;
    tam[u]+=tam[v];
}

int main(){_
    while (cin>>n>>m){
        init(n+1);
        while (m--){
            cin>>a>>b;
            join(a,b);
        }
        cin>>e;
        cout<<tam[id(e)]<<endl;
    }
    return 0;
}

