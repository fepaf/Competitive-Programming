
#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
// #define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<20)
#define EPS 1e-8
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
te dou um array de números A[1..N] N<=10**5, A[i] <= 10**9
e q consultas L, R, X, e tem que dizer a frequencia de X no intervalo
*/
int x, a[MAX], caso, n, l, q, r;
int lo, hi, md, ans;
map<int, vi> pos;

int main(){_

    while(cin >> n){
        for (int i=1; i<=n; ++i){
            cin >> a[i];
            pos[a[i]].eb(i);
        }
        cin >> q;
        while (q--){
            cin >> l >> r >> x;
            ans = upper_bound(all(pos[x]) , r) - lower_bound(all(pos[x]), l);
            cout << ans << endl;
        }
    }
    return 0;
}
