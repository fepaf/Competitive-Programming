    #include<bits/stdc++.h>
    #define _ ios_base::sync_with_stdio(0); cin.tie(0);
    #ifdef ONLINE_JUDGE
    #define endl '\n'
    #endif
    #define INF 0x3f3f3f3f
    #define MAX 10001
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

    int n, x, y, q, k, p[MAX][MAX], lo, hi, md, xa, ya, xb, yb, caf, s[4];

    int main(){_
        cin >> n >> q;
        for (int i=n; i--;){
            cin >> x >> y;
            ++p[y][x];
        }
        for (int i=1; i<MAX; ++i){
            p[0][i] += p[0][i-1];
            p[i][0] += p[i-1][0];
        }
        for (int i=1; i<MAX; ++i){
            for (int j=1; j<MAX; ++j){
                p[i][j] += p[i-1][j]+p[i][j-1]-p[i-1][j-1];
            }
        }
        while (q--){
            cin >> x >> y >> k;
            lo = 0, hi = MAX-1;
            while (lo < hi){
                md = lo + ((hi-lo)>>1);

                xa = max(0, x-md);
                xb = min(MAX-1, x+md);
                ya = max(0, y-md);
                yb = min(MAX-1, y+md);

                s[3] = p[yb][xb];
                s[2] = xa > 0 ? p[yb][xa-1] : 0;
                s[1] = ya > 0 ? p[ya-1][xb] : 0;
                s[0] = (xa > 0) && (ya > 0) ? p[ya-1][xa-1] : 0;

                caf = s[3]-s[2]-s[1]+s[0];

                if (caf >= k) hi = md;
                else lo = md + 1;
            }
            cout << lo << endl;
        }
        return 0;
    }
