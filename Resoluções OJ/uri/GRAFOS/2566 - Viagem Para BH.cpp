// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Viagem Para BH
// Nível: 4
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2566

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define INF 0x3f3f3f3f
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
#define vu vector<ull>
#define vs vector<string>
#define vl vector<ll>
#define vvi vector<vi>
#define vii vector<ii>
#define vd vector<double>
#define qi queue<int>
#define fs first
#define sc second
#define pb push_back
#define mp make_pair

using namespace std;

int n,m,adj[2][MAX][MAX],a,b,t,r;

int main(){_
    while (cin>>n>>m){
        for (int i=n+1;i--;) for (int j=n+1;j--;) adj[0][i][j]=adj[1][i][j]=INF;
        for (int i=n+1;i--;) adj[0][i][i]=adj[1][i][i]=0;
        while (m--){
            cin>>a>>b>>t>>r;
            adj[t][a-1][b-1]=r;
        }
        for (int k=0;k<n;k++){
            for (int i=0;i<n;i++){
                for (int j=0;j<n;j++){
                    adj[0][i][j]=min(adj[0][i][j],adj[0][i][k]+adj[0][k][j]);
                    adj[1][i][j]=min(adj[1][i][j],adj[1][i][k]+adj[1][k][j]);
                }
            }
        }
        cout<<min(adj[0][0][n-1],adj[1][0][n-1])<<endl;
    }
    return 0;
}

