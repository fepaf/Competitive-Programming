#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#ifdef ONLINE_JUDGE
#define endl '\n'
#endif
#define INF 0x3f3f3f3f
#define MAX 16
#define OUT MAX
#define MOD 1000000007
#define i64 long long
#define all(x) (x).begin() , (x).end()
#define sz(x) (int)(x).size()
#define ii pair<int, int>
#define fs first
#define sc second
#define eb emplace_back
#define vi vector<int>
#define vvi vector<vi>
#define vii vector<ii>
#define vvii vector<vii>
#define lsb(x) ((x) & (-x))
#define gcd(x,y) __gcd((x),(y))
#define esq(x) (x<<1)
#define dir(x) ((x<<1)|1)
#define W(x) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;

using namespace std;

int n, m;
int g[MAX][MAX], memo[MAX][1<<MAX];
int u, v, w;

int tsp(int u, int vis){

    if (vis == ((1<<n)-1)){// if (__builtin_popcount(vis) == n)
        return g[u][0];
    }

    if (memo[u][vis]!=-1) return memo[u][vis];

    int ans = INF;
    for (int v=0; v<n; ++v){
        if (!((1<<v) & vis)){
            ans = min(ans, g[u][v] + tsp(v, vis | (1<<v)));
        }
    }

    return memo[u][vis] = ans;
}

int main(){_
    cin >> n >> m;
    for (int i=n; i--;){
        for (int j=n; j--;){
            g[i][j] = INF;
        }
        g[i][i] = 0;
    }

    for (int u=0; u<n; ++u){
        for (int vis=0; vis<(1<<n); ++vis){
            memo[u][vis] = -1;
        }
    }

    while (m--){
        cin >> u >> v >> w;
        g[u][v] = w;
        g[v][u] = w;
    }
    cout << tsp(0,1) << endl;
    return 0;
}
