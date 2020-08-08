
#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
// #define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<20)
#define EPS 1e-8
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

/*
raiz cubica N
*/
i64 x, a[MAX], caso, n;
double lo, hi, md;

double p(double md, double x){
    return md*md*md - x >= EPS;
}

int main(){_
    cout << fixed << setprecision(10);
    while(cin >> n){
        lo = 0; hi = n ;
        for (int i=50; i--;){
            md = (lo+hi)/2;
            cout << "#" << md << endl;
            if (p(md, n)) hi = md;
            else lo = md;
        }
        cout << lo << endl;
    }
    return 0;
}
