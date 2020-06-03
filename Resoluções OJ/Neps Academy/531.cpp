#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<10)
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

using namespace std;

int n, k, x, y, d;
int m[MAX][MAX];
vii p;

int main(){_
    cin >> n >> k;
    for (int i=k; i--;){
        cin >> x >> y >> d;
        for (int a=0; a<n; ++a){
            for (int b=0; b<n; ++b){
                m[a][b] += (abs(a-x)+abs(b-y)==d);
            }
        }
    }
    for (int i=0; i<n; ++i){
        for (int j=0; j<n; ++j){            
            if (m[i][j]==k){
                p.eb(i,j);
            }
        }
    }
    if (sz(p)==1) cout << p[0].fs << ' ' << p[0].sc << endl;
    else cout << -1 << ' ' << -1 << endl;
    return 0;
}
