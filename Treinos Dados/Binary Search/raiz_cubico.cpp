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
#define fs first
#define sc second
#define eb emplace_back
#define ii pair<int, int>
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

double lo, hi, md, n;

//Problema: achar raiz cubica de N
// 0 <= N <= 10a9
// Imprima com uma precisao de 6 casas

int main(){_
    cin >> n;
    lo = 0, hi = n;
    for (int i=50; i--;){
        md = (lo+hi)/2.0;
        cout << fixed << setprecision(10) << md << endl;
        if (md*md*md>=n) hi = md;
        else lo = md;
    }
    return 0;
}
