#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF (2e18)
#define MAX (1<<20)
#define MOD 1000000007
#define i64 long long
#define all(x) (x).begin() , (x).end()
#define sz(x) (int)(x).size()
#define ii antr<int, int>
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
#define branco 0
#define cinza -1
#define preto 1

using namespace std;

/*
Problem: Collecting Numbers
Link: https://cses.fi/problemset/task/2216
*/

i64 n, p[MAX], ans, x;

int main(){_
    cin >> n;

    for (int i=n; i--;){
        cin >> x;
        p[x] = i;
    }
    p[0] = -1;
    for (int i=1; i<=n; ++i){
        ans += (p[i] > p[i-1]);
    }
    cout << ans << endl;
    return 0;     
}
