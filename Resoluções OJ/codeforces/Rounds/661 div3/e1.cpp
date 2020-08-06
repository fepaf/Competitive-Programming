#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
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

using namespace std;

i64 t, n, k, i, u, v, w, s, tot, ans, dif;
vvii g;
vi tam, pesos;
multiset<ii, greater<ii> > ms;
vi e;

i64 dfs(i64 u, i64 p){
    tam[u] = 0;
    int isleave = 1;
    for (auto [v,w] : g[u]){
        if (v!= p){
            isleave=0;
            tam[u] += dfs(v, u);
            tot += w*tam[v];
            e[v] = w;
            ms.insert({(w-(w>>1))*tam[v], v});
        }
    }
    tam[u] += isleave;
    return tam[u];
}

int main(){_
    for(cin >> t; t--;){
        cin >> n >> s;
        g = vvii(n+1);
        for (int i=n-1; i--;){
            cin >> u >> v >> w;
            g[u].eb(v,w);
            g[v].eb(u,w);
        }
        tam = vi(n+1);
        e = vi(n+1);
        tot = 0LL;
        dfs(1, -1);
        ans = 0LL;
        while (!ms.empty() && tot>s){
            ii p = *ms.begin();
            ms.erase(ms.begin());
            k = p.sc;
            tot -= (e[k]-(e[k]>>1LL))*tam[k];
            ++ans;
            e[k] >>= 1LL;
            ms.insert({(e[k]-(e[k]>>1LL))*tam[k], k});
        }
        cout << ans << endl;
        ms.clear();
    }
    return 0;
}
