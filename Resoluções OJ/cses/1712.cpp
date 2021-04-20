#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF (1LL<<60)
#define MAX (1<<20)
#define MOD 1000000007
#define i64 long long
#define all(x) (x).begin() , (x).end()
#define sz(x) (int)(x).size()
#define ii pair<i64, i64>
#define fs first
#define sc second
#define eb emplace_back
#define vi vector<i64>
#define vvi vector<vi>
#define vii vector<ii>
#define vvii vector<vii>
#define lsb(x) ((x) & (-x))
#define gcd(x,y) __gcd((x),(y))
#define W(x) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;
#define branco 0
#define cinza -1
#define preto 1

using namespace std;

/*
Problem: Exponentiation II
Link: https://cses.fi/problemset/task/1712
*/

i64 n, a, b, c;

i64 f(i64 b, i64 e, i64 m){
    i64 ans = 1LL;
    for (; e; b=(b*b)%m, e>>=1) if (e&1LL) ans=(ans*b)%m;
    return ans;
}

int main(){_
    for (cin >> n; n--;){
        cin >> a >> b >> c;
        cout << f(a, f(b, c, MOD-1), MOD) << endl;
    }
    return 0;     
}
