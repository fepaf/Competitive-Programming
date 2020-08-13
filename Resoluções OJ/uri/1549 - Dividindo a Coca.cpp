
#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
// #define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<20)
#define MOD 1000000007
#define i64 long long
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

long double n, l, b1, b2, b3, h, lo, hi, md;
int c;

int main(){_
    cout << fixed << setprecision(2);
    for (cin >> c; c--;){
        cin >> n >> l >> b1 >> b3 >> h;
        lo = 0, hi = h;
        for (int i=50; i--;){
            md = (lo+hi)/2.0;
            b2 = b1+md*(b3-b1)/h;
            if (n*M_PIl*md*(b2*b2+b2*b1+b1*b1)/3 >= l) hi = md;
            else lo = md;
        }
        cout << hi << endl;
    }
    return 0;
}
