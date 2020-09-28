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
int gargalo[MAX][MAX][MAX]; 
int u, v, w;

void fw(int n){
    for (int k=1; k<=n; ++k){
        for (int i=1; i<=n; ++i){
            for (int j=1; j<=n; ++j){
                gargalo[k][i][j] = min(gargalo[k-1][i][j], max(gargalo[k-1][i][k] , gargalo[k-1][k][j]));
            }
        }
    }
}

int main(){_
    cin >> n >> m;

    for (int i=0; i<=n; ++i){
        for (int j=0; j<=n; ++j){
            gargalo[0][i][j] = (i!=j ? INF : 0);
        }
    }

    while(m--){
        cin >> u >> v >> w;
        gargalo[0][u][v] = w;
        gargalo[0][v][u] = w;
    }

    fw(n);

    for (int i=1; i<=n; ++i){
        for (int j=1; j<=n; ++j){
            cout << gargalo[n][i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}
