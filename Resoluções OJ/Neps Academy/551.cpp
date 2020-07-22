#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define i64 long long
#define ii pair<int, int>
#define fs first
#define sc second
#define vi vector<int>
#define vii vector<ii>
#define eb emplace_back
#define pb push_back

using namespace std;

i64 n, m, p, q, r, s, x, y, i, j, a, b, ans;

int main(){_
    cin >> n >> p >> q >> r >> s >> x >> y >> i >> j;
    a = (p*i+q)%x;
    b = (r+s*j)%y;
    while (n--){
        ans += a*b;
        a = (a+q)%x;
        b = (b+r)%y;
    }
    cout << ans << endl;
    return 0;
}
