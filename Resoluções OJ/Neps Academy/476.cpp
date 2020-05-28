#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<10)
#define MOD 1000000007
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

int n;
double p, g;
double ans = 1e9;

int main(){_
    cin.tie(0);
    cin >> n;
    for (int i=1; i<=n; ++i){
        cin >> p  >> g;
        ans = min(ans, 1000*(p/g));
    }
    cout << fixed << setprecision(2) << ans << endl;
    
    return 0;
}
