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

int n, c, t, d, ans, tc, ic;
priority_queue<ii, vii, greater<ii> > pq;

int main(){_
    cin >> c >> n;
    for (int i=0;i<c; ++i){
        pq.push({0,i});
    }
    while (n--){
        cin >> t >> d;
        tc = pq.top().fs;
        ic = pq.top().sc;
        pq.pop();
        ans += (tc - t > 20);
        pq.push({max(tc, t)+d, ic});
    }

    cout << ans << endl;
}
