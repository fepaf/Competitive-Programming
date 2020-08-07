#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<20)
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

int n, m, lo, hi, md, t, i, j, k;
string a, b;

int main(){_
    for (cin >> t; t--;){
        cin >> a >> b;
        n = sz(a), m=sz(b);
        lo = 0; hi = n/m+1;
        while (lo < hi){
            md = lo + ((hi-lo)>>1);            
            for (i=j=0; i<n && j<md*m; ++i){
                j += (a[i] == b[j/md]);
            }
            if (j<m*md) hi = md;
            else lo = md+1;
        }
        cout << lo-1 << endl;
    }
    return 0;
}
