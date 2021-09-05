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

int n, m, k, l, xi, yi, xf, yf, x, y, dir;
set<int> lin[MAX], col[MAX];
ii obs[MAX];

int main(){_
    cin >> n >> m >> xi >> yi >> k >> l;

    for (int i=1; i<=n; ++i){
        lin[i].insert(0);
        lin[i].insert(m+1);
    }

    for (int i=1; i<=m; ++i){
        col[i].insert(0);
        col[i].insert(n+1);
    }

    for (int i=k; i--;){
        cin >> x >> y;
        lin[x].insert(y);
        col[y].insert(x);
    }

    xf = xi, yf = yi;
    for (dir = 0;l--; dir=((dir+1)&3)){
        if (dir == 0){
            yf = *(lin[xf].upper_bound(yf))-1;
        } else if (dir == 1){
            xf = *(col[yf].upper_bound(xf))-1;
        }
         else if (dir == 2){
            yf = *(--lin[xf].lower_bound(yf))+1;
        }
         else if (dir == 3){
            xf = *(--col[yf].upper_bound(xf))+1;
        }        
        // cout << ":" << xf << ' ' << yf << endl;
    }
    cout << xf << ' ' << yf << endl;
    return 0;
}
