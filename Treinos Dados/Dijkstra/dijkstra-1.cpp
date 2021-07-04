#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#ifdef ONLINE_JUDGE
#define endl '\n'
#endif
#define INF (1LL<<60)
#define MAX (1<<20)
#define OUT MAX
#define MOD 1000000007
#define i64 long long
#define all(x) (x).begin() , (x).end()
#define sz(x) (int)(x).size()
#define ii pair<i64, i64>
#define fs first
#define sc second
#define eb emplace_back
#define vi vector<i64>
#define vvi vector<vi>
#define vii vector<ii>
#define vvii vector<vii>
#define lsb(x) ((x) & (-x))
#define gcd(x,y) __gcd((x),(y))
#define esq(x) (x<<1)
#define dir(x) ((x<<1)|1)
#define W(x) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;
 
using namespace std;
 
int n, m, u, v, w;
vii g[MAX];
vi dist;
vi ant;
 
void djk(int s){
    priority_queue<ii, vii, greater<ii> > pq;
    
    ant = vi(n+1, -1);
    dist = vi(n+1, INF);
 
    dist[s] = 0;
    pq.push({0, s});
 
 
    while (!pq.empty()){
        ii par = pq.top(); pq.pop();
        int d = par.fs, u = par.sc;
 
        if (d > dist[u]) continue;
 
        for (auto [v, w] : g[u]){
            if (dist[u] + w < dist[v]){
                dist[v] = dist[u] + w;
                ant[v] = u;
                pq.push({dist[v],v});
            }
        }
    }
 
}
 
 
int main(){_
    cin >> n >> m;
    while (m--){
        cin >> u >> v >> w;
        g[u].eb(v,w);
    }
 
    djk(1);
 
    for (int u=1; u<=n; ++u){
        cout << dist[u] << ' ';
    }
    cout << endl;
    return 0;
}