#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
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

i64 t, x, r, ans, lo, hi, mid;

int main(){_

    for (cin >> t; t--; ){
        cin >> x;
        ans = 0;
        for (i64 i=1; i<10001 && i*i*i<x; ++i){
            r = x - i*i*i;
            lo = 1, hi = 10000;
            while (lo < hi){
                mid = lo + ((hi-lo)>>1);
                if (mid*mid*mid>r) hi = mid;
                else lo = mid+1;
            }
            r = lo-1;
            if (r*r*r + i*i*i == x){
                ans = 1;
                break;
            }
        }
        cout << (ans ? "YES" : "NO") << endl;
    }
    return 0;
}
