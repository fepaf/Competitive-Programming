#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAX (1<<10)

using namespace std;

int l, c, m, n, a[MAX][MAX], s[MAX][MAX], ans;

int main(){_
    cin >> l >> c >> m >> n;
    for (int i=1; i<=l; ++i){
        for (int j=1; j<=c; ++j){
            cin >> a[i][j];
            s[i][j] = s[i-1][j] + s[i][j-1] - s[i-1][j-1] + a[i][j];
        }
    }
    for (int i=m; i<=l; ++i){
        for (int j=n; j<=c; ++j){
            ans = max(ans, s[i][j] - s[i-m][j] - s[i][j-n] + s[i-m][j-n]);
        }
    }
    cout << ans << endl;
    return 0;
}