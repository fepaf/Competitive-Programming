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

int t, n, a[MAX], d[MAX], k, ans, i, u;
string s;
set<int> p[2];

int main(){_
    for(cin >> t; t--;){
        cin >> n >> s;
        i=1;
        for (char c : s){
            d[i] = c-'0';
            a[i] = 0;
            p[c-'0'].insert(i++);
        }
        p[0].insert(2*n);
        p[1].insert(2*n);
        
        k=1;
        for (int i=1; i<=n; ++i){
            if (!a[i]){
                u = i;
                while (u<=n){
                    a[u] = k;
                    p[d[u]].erase(u);
                    u = *p[d[u]^1].upper_bound(u);
                }
                ++k;
            }
        }
        cout << k-1 << endl;
        for (int i=1; i<=n; ++i){
            cout << a[i] << ' ';
        }
        cout << endl;
        p[0].clear();
        p[1].clear();
    }
    return 0;
}
