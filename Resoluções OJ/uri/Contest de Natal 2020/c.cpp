#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAX (1<<20)

using namespace std;

int n, g, cnt, ans, f[MAX];

int main(){_
    cin >> n;
    for (int i=n; i--;){
        cin >> g;
        ++f[g];
    }
    for (int i=0; i<10123; ++i){
        if (f[i]){
            ans += f[i]*(++cnt);
        }
    }
    cout << ans << endl;
    return 0;
}