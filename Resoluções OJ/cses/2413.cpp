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
Problem: Counting Towers
Link: https://cses.fi/problemset/task/2413
*/

i64 f[MAX], g[MAX], n, t;

int main(){_
    f[1] = g[1] = 1LL;
    for (int i=2; i<MAX; ++i){
        f[i] = ((f[i-1]*2)+g[i-1])%MOD;
        g[i] = ((g[i-1]*4)+f[i-1])%MOD;
    }
    for (cin >> t; t--;){
        cin >> n;
        cout << (f[n]+g[n])%MOD << endl;
    }
    return 0;     
}
