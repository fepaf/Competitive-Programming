#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF (1LL<<60)
#define MAX (1<<20)
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
#define W(x) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;
#define branco 0
#define cinza -1
#define preto 1

using namespace std;

/*
Problem: Flight Discount 
Link: https://cses.fi/problemset/task/1195
*/

i64 n, m, u, v, w;
vvii adj;
vi dist;

int vt(int u, int e){
    return (u<<1)+e;
}

i64 djk(i64 s){
    dist = vi(n+n+1, INF);
    dist[s] = 0;
    priority_queue<ii, vii, greater<ii>> pq;
    pq.push({0, s});
    while (!pq.empty()){
        ii p = pq.top(); pq.pop();
        i64 u = p.sc, d = p.fs;

        if (d > dist[u]) continue;

        for (auto [v, w] : adj[u]){
            if (dist[u]+w < dist[v]){
                dist[v] = dist[u]+w;
                pq.push({dist[v], v});
            }
        }
    }

    return min(dist[vt(n-1,0)], dist[vt(n-1,1)]);
}

int main(){_
    cin >> n >> m;
    adj = vvii(n+n+1);
    while (m--){
        cin >> u >> v >> w;
        --u, --v;
        adj[vt(u,0)].eb(vt(v,0), w);
        adj[vt(u,0)].eb(vt(v,1), (w>>1));
        adj[vt(u,1)].eb(vt(v,1), w);
    }
    cout << djk(vt(0,0)) << endl;
    return 0;     
}
