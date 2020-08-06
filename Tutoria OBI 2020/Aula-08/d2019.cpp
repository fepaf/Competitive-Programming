#include<bits/stdc++.h>
#define MAX 200123
#define sz(x) (int)(x).size()
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

string s;
int d, sum, f[2019], a[MAX], ans, p10, n;

int main(){_
    cin >> s;
    n = sz(s);
    p10 = 1;
    for (int i=n; i--; p10=(p10*10)%2019){
        int d = s[i]-'0';
        a[i] = (p10 * d)%2019;
    }
    f[0] = 1;
    for (int i=0; i<n; ++i){
        sum = (sum + a[i])%2019;
        ans += f[sum];
        ++f[sum];
    }
    cout << ans << endl;
    return 0;
}