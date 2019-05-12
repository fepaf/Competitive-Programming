#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define i64 long long
#define INF 0x3f3f3f3f
#define MAX (1<<20)
#define fs first
#define sc second
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define vvi vector<vi>
#define eb emplace_back
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define lsb(x) (x & -x)

using namespace std;

int t,a,b,c,d,n;
i64 ans;
unordered_map<int,i64> fa,fb;

int main(){_
    for (cin >> t; t--;){
        ans = 0LL;
        for (cin >> n; n--;){
            cin >> a >> b;
            ++fa[a] , ++fb[b];
        }

        for (auto xf : fb){
            ans += (xf.sc * fa[xf.fs]);
        }
        cout << ans  << endl;
        fa.clear(), fb.clear();
    }
	return 0;
}
