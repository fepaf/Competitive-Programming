#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<17)
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

int n, q, r, x, op, ans;
int fl[MAX][51], fc[MAX][51];

int main(){_
    cin >> n >> q >> r;
    for (int i=n; --i;){
        fl[i][0] = fc[i][0] = n;
    }
    while (q--){
        cin >> op;
        switch (op){
            case 1:
                cin >> x >> r; --x;
                for (int i=51; --i;){
                    fl[x][i] = 0;
                }
                fl[x][r] = n;
                break;
            case 2:
                cin >> x >> r; --x;
                for (int i=51; --i;){
                    fc[x][i] = 0;
                }
                fc[x][r] = n;
                break;
            case 3:
                cin >> x;
                ans = 0;
                for (int i=51; --i;){
                    if (fl[x][i] > fl[x][ans]) ans = i;
                }
                cout << ans << endl;
                break;
            case 4:
                cin >> x;
                ans = 0;
                for (int i=51; --i;){
                    if (fc[x][i] > fc[x][ans]) ans = i;
                }
                cout << ans << endl;
                break;
        }
    }
    return 0;
}
