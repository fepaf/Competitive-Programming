#include<bits/stdc++.h>
#define MAXN 21234
#define _ ios_base::sync_with_stdio(0);
#define eb emplace_back
#define endl '\n'
#define INF (1LL<<50)
#define int long long

using namespace std;

int n, x, d;
int s[1<<16];
int sum, ma, me;
int ans = 0;

signed main(){_
    cin >> n >> x >> d; 
    for (int i=0; i<n; ++i){
        cin >> s[i];
    }

    for (int m=1; m<(1<<n); ++m){
        sum = 0;
        me = INF;
        ma = -INF;
        for (int i=0; i<n; ++i){
            if (m&(1LL<<i)){
                sum += s[i];
                me = min(me, s[i]);
                ma = max(ma, s[i]);
            }
        }

        ans += (sum>=x && (ma-me)<=d);
    }

    cout << ans << endl;

    return 0;  
}