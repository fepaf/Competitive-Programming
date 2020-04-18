#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<14)
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

int n, xa, ya, xb, yb, t, x, y;

int main(){_
    while ((cin >> xa >> ya >> xb >> yb) && (xa || ya || xb || yb)){
        cin >> n;
        int ans = 0;
        while (n--){
            cin >> x >> y;
            ans += (xa <= x && x <= xb && yb <= y && y <= ya);
        }
        cout << "Teste " << ++t << endl << ans << endl << endl;
    }
    cout << endl;
    return 0;
}
