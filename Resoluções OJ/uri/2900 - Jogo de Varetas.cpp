#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<20)
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

int n, ans, c, v, r[4];

int main(){_
    while ((cin >> n) && (n)){
        ans = r[0] = r[1] = r[2] = r[3] = 0;
        while (n--){
            cin >> c >> v;
            ++r[v&3];
            ans += (v>>2);
        }
        ans += (r[2]+r[3])>>1;
        cout << ans << endl;
    }
    cout << endl;
    return 0;
}
