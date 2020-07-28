#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAX (1<<20)
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

i64 a[MAX], psa[MAX], n, ans;
map<i64, i64> f;
/*
Quanto subvetores existem com soma igual a 0
-1e9<=ai<=1e9
n<=1e5
*/
int main(){_
    while (cin >> n){
        psa[0] = 0;
        f[0] = 1;
        for (int i=1; i<=n; ++i){
            cin >> a[i];
            psa[i] = psa[i-1] + a[i];
            // cout << (psa[i]) << ' ';
            ans += f[psa[i]];
            ++f[psa[i]];
        }
        // cout << endl;
        cout << ans << endl;
    }
    return 0;        
}