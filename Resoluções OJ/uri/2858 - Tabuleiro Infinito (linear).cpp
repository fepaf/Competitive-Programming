#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
// #define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<20)
#define MOD 1000000007
#define i64 unsigned long long
#define all(x) (x).begin() , (x).end()
#define sz(x) (int)(x).size()
#define ii pair<int, int>
#define fs first
#define pi 2*acosl(0.0)
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

i64 d, e, x, y, ans, r;

//x*d-y*e = 1
//x*d-y*e = -1

int main(){_
    while (cin >> d >> e){
        ans = INF;
        for (x = 0; x<e; ++x){
            r = (x*d)%e;
            y = (x*d)/e;
            if (r == 1){
                ans = min(ans, x+y);
                break;
            }
            if (r == e-1){
                ans = min(ans, x+y+1);
                break;
            }
        }
        for (y = 0; y<d; ++y){
            r = (y*e)%d;
            x = (y*e)/d;
            if (r == 1){
                ans = min(ans, x+y);
                break;
            }
            if (r == d-1){
                ans = min(ans, x+y+1);
                break;
            }
        }
        cout << (ans != INF ? to_string(ans) : "IMPOSSIVEL") << '\n';
    }
}
