#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#ifdef ONLINE_JUDGE
#define endl '\n'
#endif
#define INF 0x3f3f3f3f
#define MAX (1<<20)
#define OUT MAX
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
#define esq(x) (x<<1)
#define dir(x) ((x<<1)|1)
#define W(x) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;

using namespace std;

int t, n, ans[1<<7][1<<7];

int main(){_
    for (cin >> t; t--;){
        cin >> n;
        if (n==1) cout << 1 << endl;
        else if (n==2) cout << -1 << endl;
        else if (n==3) {
            cout << "2 9 7" << endl;
            cout << "4 6 3" << endl;
            cout << "1 8 5" << endl;
        } else {
            int cnt = 1;
            for (int i=0; i<n; ++i){
                for (int j=0; j<n; j+=2){
                    ans[i][j] = cnt++;
                }
            }
            for (int i=0; i<n; ++i){
                for (int j=1; j<n; j+=2){
                    ans[i][j] = cnt++;
                }
            }
            for (int i=0; i<n; ++i){
                for (int j=0; j<n; ++j){
                    cout << ans[i][j] << ' ';
                }
                cout << endl;
            }
        }
    }
    return 0;
}
