#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
// #define endl '\n'
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

/*
uri 1308 - guerreiros etruscos nunca jogam xadrez
*/

i64 t(i64 n){
    return (n*(n+1))/2;
}

bool p(i64 idx, i64 x){
    return (t(idx) > x);
}

i64 x, lo, hi, md, caso;

int main(){_
    for (cin >> caso; caso--;){
        cin >> x;
        lo = 0LL , hi = 10000000000LL;
        while (lo < hi){
            md = lo + (hi-lo)/2;
            // W(t(md))
            if (p(md, x)) hi = md;
            else lo = md+1LL;
        }
        cout << (lo-1) << '\n';
    }
    return 0;
}
