// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Nêmesis
// Nível: 4
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1972

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define INF 0x3f3f3f3f
#define MAX 502
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

int ans,n,m,dx[]={-1,0,1,0},h,e,a,b,u,v,w;
char lab[MAX][MAX];
vvii adj;
vi dist;

int toU(int i, int j){
    return i*(m+2)+j;
}

int dijkstra(int s, int t){
    int d, u , v , w;
    dist = vi((n+2)*(m+2),INF); dist[s]=0;
    priority_queue <ii , vii , greater<ii> > pq; pq.push(ii(0,s));//cuidado aqui com matrizes
    while (!pq.empty()){
        ii front = pq.top(); pq.pop();
        d=front.fs , u=front.sc;
        if (d>dist[u]) continue;

        if (u==t) return dist[t];
        for (auto p : adj[u]){
            v=p.fs , w=p.sc;

            if (dist[u]+w<dist[v]){
                dist[v]=dist[u]+w;
                pq.push(ii(dist[v],v));
            }
        }

    }
    return dist[t];
}

int main(){_
    while (cin>>n>>m){
        adj = vvii((n+2)*(m+2));
        for (int i=1;i<=n;i++){
            for (int j=1;j<=m;j++){
                cin>>lab[i][j];
                if (lab[i][j]=='H') h=toU(i,j);
                if (lab[i][j]=='E') e=toU(i,j);
            }
        }
        for (int i=1;i<=n;i++){
            for (int j=1;j<=m;j++){
                if (lab[i][j]!='#'){
                    for (int k=4; k--;){
                        a=i+dx[3-k], b=j+dx[k];
                        if (0<a && a<=n && 0<b && b<=m && lab[a][b]!='#'){
                            u = toU(i,j) , v=toU(a,b) , w=(lab[a][b]>='1' && lab[a][b]<='9' ? lab[a][b]-'0' : 0);
                            adj[u].pb(ii(v,w));//estranhamente aqui tem que ser nao direcionado
                        }
                    }
                }

            }
        }
        if ((ans=dijkstra(h,e))!=INF){
            cout<<ans<<endl;
        }
        else {
            cout<<"ARTSKJID"<<endl;
        }
    }
    return 0;
}

