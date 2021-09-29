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

i64 n, m, k, u, v, w, t, h, a, b, ans;
vii g[MAX];
vi dist;
priority_queue<ii, vii, greater<ii>> pq;

i64 f(i64 u, i64 d){
    return u*(k+1)+d;
}

int main(){_
    cin >> k >> n >> m;
    while (m--){
        cin >> u >> v >> t >> h;
        --u, --v;
        for (int i=k; i>=h; --i){
            g[f(u,i)].eb(f(v,i-h),t);
            g[f(v,i)].eb(f(u,i-h),t);
        }
    }
    cin >> a >> b;
    --a, --b;

    dist.assign(n*(k+1)+100, INF);
    dist[f(a,k)] = 0;
    pq.push({0,f(a,k)});
    while (!pq.empty()){
        auto[d, u] = pq.top(); pq.pop();

        if (d > dist[u]) continue;

        for (auto [v, w] : g[u]){
            if (dist[u] + w < dist[v]){
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }
    ans = INF;
    for (int i=1; i<=k; ++i){
        ans = min(ans, dist[f(b, i)]);
    }
    cout << (ans != INF ? ans : -1) << endl;
    return 0;
}
