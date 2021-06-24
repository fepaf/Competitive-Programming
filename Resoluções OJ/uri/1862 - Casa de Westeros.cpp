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

char rel[MAX][MAX];
int n, vis[MAX], id[MAX], comp, t;
vi g[MAX], tam;

void dfs(int u,int c){
    vis[u] = 1;
    id[u] = c;
    ++t;
    for (int v : g[u]){
        if (!vis[v]){
            dfs(v, c);
        }
    }
}

int main(){_
    cin >> n;
    for (int i=0; i<n; ++i){
        for (int j=0; j<n; ++j){
            cin >> rel[i][j];
            if (rel[i][j]=='S'){
                g[i].eb(j);
                g[j].eb(i);
            }
        }
    }

    for (int u=0; u<n; ++u){
        if (!vis[u]){
            ++comp;
            t=0;
            dfs(u, comp);
            tam.eb(t);
        }
    }

    for (int i=0; i<n; ++i){
        for (int j=0; j<n; ++j){
            if (rel[i][j]=='D' && id[i]==id[j]){
                cout << -1 << endl;
                return 0;
            }
        }
    }

    sort(tam.rbegin(), tam.rend());
    cout << comp << endl;
    cout << tam[0];
    for (int i=1; i<comp; ++i){
        cout << ' ' << tam[i];
    }
    cout << endl;
    return 0;
}
