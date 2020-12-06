#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAX (1<<20)
#define i64 long long

using namespace std;

i64 n, k, s[MAX], ans, q;

int main(){_
    cin >> n >> k;
    for (int i=0; i<n; ++i){
        cin >> s[i];
    }
    sort(s, s+n, greater<i64>());

    q = n/k;
    for (int i=0; i<q; ++i){
        ans += s[i];
    }

    ans *= k;
    ans += (n%k)*s[q];

    cout << ans << endl;
    return 0;
}