#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MOD 1000000007
#define MAX (1<<20)
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

using namespace std;

/*
f(d, t) = Maior lucro a partir do dia d, possuindo t ações nesse

0 se d>n
max(f(d+1,0), f(d+1,1)-p[d]-c) se t=0
max(f(d+1,1), f(d+1,0)+p[d]) se t=1

*/

int n, c, p[MAX], memo[MAX][2];

int f(int d, int t){
    if (d>n) return 0;

    if (~memo[d][t]) return memo[d][t];

    int ans = 0;
    if (t==0){
        ans = max(f(d+1,0), f(d+1,1)-p[d]-c);
    }
    if (t==1){
        ans = max(f(d+1,1), f(d+1,0)+p[d]);
    }

    return memo[d][t] = ans;
}


int main(){_
    cin >> n >> c;

    for (int i=1; i<=n; ++i)  {
        cin >> p[i];
    }

    for (int i=0; i<=n; ++i){
        for (int j=0; j<=2; ++j){
            memo[i][j] = -1;
        }
    }

    cout << f(1,0) << endl;
    return 0;
}