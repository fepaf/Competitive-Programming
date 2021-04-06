#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (305)
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

int a[MAX][MAX], dist[MAX][MAX], n, lo, hi, md, d[] = {-1, 0, 1, 0};
set<int> cj;
vi ma;

int pode(int i, int j, int x){
    return ((0<=i) && (i<n) && (0<=j) && (j<n) && (dist[i][j]==INF) && (a[i][j]<=x));
}

int bfs(int idx){
    queue<ii> fila;
    for (int i=n; i--;){
        for (int j=n; j--;){
            dist[i][j] = INF;
        }
    }

    fila.push({0, 0});
    if (!pode(0, 0, ma[idx])) return INF;
    dist[0][0] = 1;
    
    while (!fila.empty()){
        int i = fila.front().fs;
        int j = fila.front().sc;
        fila.pop();

        for (int k=4; k--;){
            int a = i+d[3-k], b = j+d[k];
            if (pode(a, b, ma[idx])){
                dist[a][b] = dist[i][j]+1;
                fila.push({a,b});
            }
        }
    }
    return dist[n-1][n-1];
}

int main(){_
    cin >> n;
    for (int i=0; i<n; ++i){
        for (int j=0; j<n; ++j){
            cin >> a[i][j];
            cj.insert(a[i][j]);
        }
    }
    for (auto ai : cj){
        ma.eb(ai);
    }
    lo = 0, hi = sz(ma);
    while (lo < hi){
        md = lo + ((hi-lo)>>1);
        if (bfs(md) != INF) hi = md;
        else lo = md+1;
    }
    cout<< ma[lo] << ' ' << bfs(lo) << endl;
    return 0;
}
