#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#ifdef ONLINE_JUDGE
#define endl '\n'
#endif
#define INF 0x3f3f3f3f
#define MAX (1<<7)
#define OUT MAX
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
#define esq(x) (x<<1)
#define dir(x) ((x<<1)|1)
#define W(x) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;

using namespace std;

int n, p, comb[MAX][MAX];

int lucas(int n, int m){
    int ans = 1;
    for (; n || m; n/=p, m/=p){
        ans = (ans*comb[n%p][m%p])%p;
    }
    return (!ans);
}

int main(){_
    cin >> n >> p;

    for (int i=0; i<=p; ++i){
        comb[i][0] = 1;
        for (int j=1; j<=i; ++j){
            comb[i][j] = (comb[i-1][j]+comb[i-1][j-1])%p;
        }
    }

    for (int i=0; i<=n; ++i){
        cout << lucas(n, i);
    }
    cout << endl;
    return 0;
}
