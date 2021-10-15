#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#ifdef ONLINE_JUDGE
#define endl '\n'
#endif
#define INF 0x3f3f3f3f
#define MAX (1<<20)
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

int t, n, d[]={-1,0,1,0}, m, cnt, k;

int dentro(int i, int j){
    return 0<=i && i<n && 0<=j && j<= m;
}

int vt(int i, int j){
    return i*m+j;
}

vvi g;
vi vis, mt, color;

int paint(int u, int c){
    vis[u] = 1;
    color[u] = c;
    for (int v : g[u]){
        if (!vis[v]){
            paint(v, c^1);
        } else if (vis[v] && (color[v]==color[u])){
            return 0;
        }
    }
    return 1;
}

int dfs(int u){
    if (vis[u]) return 0;

    vis[u] = 1;

    for (int v : g[u]){
        if (mt[v]==-1 || dfs(mt[v])){
            mt[v] = u;
            return 1;
        }
    }

    return 0;
}

int main(){_
    for (cin >> t; t--;){
        cin >> n >> m >> k;

        g = vvi(n*m+10);
        for (int i=0; i<n; ++i){
            for (int j=0; j<m; ++j){
                for (int l=4; l--;){
                    int a = i+d[l] , b = j+d[3-l];
                    g[vt(i,j)].eb(vt(a,b));
                }
            }
        }

        color.assign(n*m+10);
        if (!paint(0)){
            cout << "NO" << endl;
            continue;
        }

    }
    return 0;
}
