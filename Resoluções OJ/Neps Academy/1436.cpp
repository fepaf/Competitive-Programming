#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#ifdef ONLINE_JUDGE
#define endl '\n'
#endif
#define INF 0x3f3f3f3f
#define MAX (5000123)
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

i64 n, m, x, k, r[MAX], c[MAX], qr, qc;
char op;

int main(){_
    cin >> m >> n >> k;
    for (int i=k; i--;){
        cin >> op >> x;
        op == 'R' ? r[x]^=1 : c[x]^=1;
    }
    for (int i=1; i<=m; ++i){
        qr+=r[i];
    }
    for (int i=1; i<=n; ++i){
        qc+=c[i];
    }
    
    i64 ans = 0;
    for (int i=1; i<=m; ++i){
        ans += r[i] ? n-qc : qc;
    }
    cout << ans << endl;
    return 0;
}
