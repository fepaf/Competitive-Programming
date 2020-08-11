#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
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

int t, a[MAX], n, l, r, psa[MAX], ips[MAX], q, ans;

/*
responder consultas
Q(L, R) = 1*A[L] + 2*A[L+1] + 3*A[L+2] + ... (R-L+1)*A[R]
*/

int main(){_
    cin >> n;
    for (int i=1; i<=n; ++i){
        cin >> a[i];
    }
    for (int i=1; i<=n; ++i){
        psa[i] = psa[i-1]+a[i];
        ips[i] = ips[i-1] + i*a[i];
    }
    cin >> q;
    while (q--){
        cin >> l >> r;
        ans = ips[r]-ips[l-1] - (l-1)*(psa[r] - psa[l-1]);
        cout << ans << endl;
    }
    return 0;
}
