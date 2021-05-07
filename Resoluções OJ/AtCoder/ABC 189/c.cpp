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

i64 t, n;
i64 h[MAX], pme[MAX], pmd[MAX];
i64 ans;
stack<int> p;

int main(){_
    cin >> n;
    for (int i=1; i<=n; ++i){
        cin >> h[i];
    }
    h[0] = h[n+1] = -1;
    for (int i=1; i<=n+1; ++i){
        while (!p.empty() && h[i] < h[p.top()]){
            pmd[p.top()] = i;
            p.pop();
        }
        p.push(i);
    }
    p.pop();
    for (int i=n; i>=0; --i){
        while (!p.empty() && h[i] < h[p.top()]){
            pme[p.top()] = i;
            p.pop();
        }
        p.push(i);
    }
    p.pop();
    ans = 0LL;
    for (int i=1; i<=n; ++i){
        ans = max(ans, (pmd[i]-pme[i]-1)*h[i]);
    }
    cout << ans << endl;
    return 0;
}
