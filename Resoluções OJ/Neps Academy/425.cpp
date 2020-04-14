#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<20)
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

using namespace std;

int dp[250*250+10], last[250*250+10], n, x, s;
int a[250];

int main(){_
    cin >> n >> x;
    for (int i=0; i<n; ++i){
        cin >> a[i];
        s += a[i];
    }
    if (s < x){
        cout << 'N' << endl;
        return 0;
    }
    memset(last, -1, sizeof(last));
    dp[0] = 1;
    for (int i=0; i<n; ++i){
        for (int j=x; j>=a[i]; --j){
            if (dp[j-a[i]]){
                dp[j] = 1 ;
                last[j] = i;
            }
        }
    }
    if (!dp[x]){
        cout << 'N' << endl;
        return 0;
    }
    cout << 'S' << endl;
    vi ans;
    for (int i=0; i<=x; ++i){
        cout <<  last[i] << ' ';
    }
    cout << endl;
    for (int u=x; u; u-=a[last[u]]){
        ans.eb(last[u]);
        cout << u << endl;
    }
    return 0;
}
