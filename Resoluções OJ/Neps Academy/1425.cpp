#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#ifdef ONLINE_JUDGE
#define endl '\n'
#endif
#define INF 0x3f3f3f3f
#define MAX (1<<10)
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

int n, m, a[MAX][MAX], vis[MAX][MAX];
queue<ii> fila;
vii g[MAX*MAX];

int main(){_
    cin >> m >> n;
    for (int i=1; i<=m; ++i){
        for (int j=1; j<=n; ++j){
            cin >> a[i][j];
            g[a[i][j]].eb(i,j);
        }
    }
    fila.push({m,n});
    vis[m][n] = 1;
    while (!fila.empty()){
        auto [i,j] = fila.front();
        fila.pop();
        if (i==1 && j==1){
            cout << "yes" << endl;
            return 0;
        }
        for (auto [u,v] : g[i*j]){
            if (!vis[u][v]){
                vis[u][v]=1;
                fila.push({u,v});
            }
        }
    }
    cout << "no" << endl;
    return 0;
}
 