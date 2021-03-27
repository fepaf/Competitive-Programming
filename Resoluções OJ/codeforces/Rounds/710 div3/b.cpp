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
#define W(x) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;

using namespace std;

int t, n, k, m, ans, last;
string s;
vi p;

int main(){_
    for (cin >> t; t--;){
        cin >> n >> k >> s;
        for (int i=0; i<n; ++i){
            if (s[i] == '*') p.eb(i);
        }
        m = sz(p);

        ans = 1;
        for (int i=0; i<m-1; ++ans){
            for (int j=i; j<m && p[j]<=p[i]+k; j++){
                last = j;
            }
            i = last;
        }
        cout << ans << endl;
        p.clear();
    }
    return 0;
}
