// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Componentes Conexos
// Nível: 4
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1082

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAX 102
#define EPS (1e-7)
#define MOD 1000000007
#define UNVISITED -1
#define VISITED 1
#define ull unsigned long long
#define ll long long
#define ii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vl vector<ll>
#define vvi vector<vi>
#define vii vector<ii>
#define vd vector<double>
#define qi queue<int>
#define fs first
#define sc second
#define pb push_back

using namespace std;

int n,m,u,v,t,caso,comp;
char a,b,c;
vi vis;
vvi adj;

int main(){_
    for (cin>>t; t--;){
        cin>>n>>m;
        adj = vvi(n), vis= vi(n,UNVISITED);
        for (int i=n;i--;) adj[i]= vi(n,0), adj[i][i]=1;
        while (m--){
            cin>>a>>b;
            u=a-'a', v=b-'a';
            adj[u][v]=adj[v][u]=1;
        }
        for (int k=0;k<n;k++) for (int i=0;i<n;i++) for (int j=0;j<n;j++) adj[i][j]|=adj[i][k]&adj[k][j];
        cout<<"Case #"<<++caso<<":"<<endl;
        comp=0;
        for (int i=0;i<n;i++){
            if (vis[i]==UNVISITED){
                ++comp;
                for (int j=0;j<n;j++){
                    if(adj[i][j]){
                        cout<<(c=j+'a')<<",";
                        vis[j]=VISITED;
                    }
                }
                cout<<endl;
            }
        }
        cout<<comp<<" connected components"<<endl<<endl;
    }
    return 0;
}

