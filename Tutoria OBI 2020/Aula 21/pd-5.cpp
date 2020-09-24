#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
// #define endl '\n'
#define INF 0x3f3f3f3f
#define MAXN (1<<20)
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
#define UNCALCULED -1000000008

using namespace std;

int memo[MAXN][2], a[MAXN];
int n, m;

//dado valor das ações em cada dia, e sóm podendo armazenar uma ação, qual maior lucro?

int f(int d, int t){
    if (d>n) return 0;

    if (memo[d][t] != UNCALCULED) return memo[d][t];


    if (t==0){
        return memo[d][t] = max(-a[d]+f(d+1,1), f(d+1,0));
    }
    if (t==1){
        return memo[d][t] = max(a[d]+f(d+1,0), f(d+1,1));
    }
}

int main(){_

    for (int i=1000002; i--;){
        memo[i][0] = memo[i][1] = UNCALCULED;
    }

    cin >> n;
    for (int i=1; i<n; ++i){
        cin >> a[i]; // -10**9 <= a[i] <= 10**9
    }

    cout << f(1,0) << endl;
    return 0;
}
