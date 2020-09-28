#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (110)
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
#define W(x) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;

using namespace std;

int n, m;
int dist[MAX][MAX];// dist[u][v] guarda peso do menor caminho de U para V
int u, v, w;

void fw(int n){
    for (int k=1; k<=n; ++k){
        for (int i=1; i<=n; ++i){
            for (int j=1; j<=n; ++j){
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }
}

int main(){_
    cin >> n >> m;

    for (int i=0; i<=n; ++i){
        for (int j=0; j<=n; ++j){
            dist[i][j] = INF;
        }
    }

    while(m--){
        cin >> u >> v >> w;
        dist[u][v] = w;
        dist[v][u] = w;
    }

    fw(n);
    int cheapest_cycle = 0;
    for (int i=1; i<=n; ++i){
            if (dist[i][i]>=0){
                cheapest_cycle = min(cheapest_cycle, dist[i][i]);
            }
    }
    cout << cheapest_cycle << endl;
    return 0;
}
