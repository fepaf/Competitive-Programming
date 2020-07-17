#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<20)
#define MOD 1100000007
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

int n, l, t, d, tv, iv;
priority_queue<ii, vii, greater<ii> > pq;
vi ans;

int main(){_
    cin >> n >> l;
    ans = vi(n+1);
    for (int i=1; i<=n; ++i){
        pq.push({0,i});
    }
    while (l--){
        cin >> t;
        tv = pq.top().fs;
        iv = pq.top().sc;
        pq.pop();
        pq.push({tv+t, iv});
        ++ans[iv];
    }
    for (int i=1; i<=n; ++i){
        cout << i << ' ' << ans[i] << endl;
    }
}
