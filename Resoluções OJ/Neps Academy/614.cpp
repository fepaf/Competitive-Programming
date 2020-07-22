#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);
#define all(x) (x).begin(),(x).end()
#define MAX (1<<20)
    
using namespace std;
    
int n, c, pos[MAX], ans;

int main(){_
    cin >> n;
    for (int i=1; i<=n; ++i){
        cin >> c;
        pos[c] = i;
    }
    ans = 1;
    for (int i=2; i<=n; ++i){
        ans += (pos[i] < pos[i-1]);
    }
    cout << ans << endl;
    return 0;
} 