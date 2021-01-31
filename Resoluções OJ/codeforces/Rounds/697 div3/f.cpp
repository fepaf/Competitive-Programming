#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
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
#define W(x) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;

using namespace std;

int t, n, m, k;
int a[MAX][MAX], b[MAX][MAX];
string s;
int ans;
int cj[2*MAX];

int main(){_
    for (cin >> t; t--;){
        cin >> n;
        for (int i=0; i<n; ++i){
            cin >> s;
            for (int j=0; j<n; ++j){
                a[i][j] = s[j]-'0';
            }
        }

        for (int i=0; i<n; ++i){
            cin >> s;
            for (int j=0; j<n; ++j){
                a[i][j] ^= (s[j]-'0');
            }
        }

        for (int i=0; i<n; ++i){
            cj[i+n] = a[0][i];
        }

        ans = 1;
        for (int i=1; i<n; ++i){
            cj[i] = (cj[n]^a[i][0]);
            for (int j=1; j<n; ++j){
                ans &= (cj[i] == (cj[j+n]^a[i][j]));
            }
        }
        cout << (ans ? "YES" : "NO") << endl;
    }
    return 0;
}
