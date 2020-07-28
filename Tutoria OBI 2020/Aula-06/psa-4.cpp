#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAX (1<<20)
#define MOD (int)(1e9 +7)
#define i64 long long
#define sz(x) (int)(x).size()
#define fs first
#define sc second
#define pb push_back
#define eb emplace_back
#define ii pair<int, int>
#define vi vector<int>
#define vii vector<ii>
#define all(x) (x).begin(), (x).end()

using namespace std;
/*
Imprime a multiplicação de todos os elementos do subvetor A[L..R] módulo MOD
n<=1e6
0 <= ai <= 1e9
*/
i64 a[MAX], psa[MAX], inv_psa[MAX], n, l, r, prod, q;

i64 inv_mod(i64 a, i64 b){
    return (a > 1 ? b-inv_mod(b%a, a)*b/a : 1);
}

int main(){_
    while (cin >> n){
        psa[0] = 1LL;
        inv_psa[0] = 1LL;
        for (i64 i=1; i<=n; ++i){
            cin >> a[i];
            psa[i] = (psa[i-1] * a[i])%MOD;
            inv_psa[i] = inv_mod(psa[i], MOD);
        }
        cin >> q;
        while (q--){
            cin >> l >> r;
            // int prod = 1;
            // for (int i=l; i<=r; ++i){
            //     prod *= a[i];
            // }
            prod = (psa[r] * inv_psa[l-1]) % MOD;
            cout << prod << endl;
        }
    }
    return 0;        
}