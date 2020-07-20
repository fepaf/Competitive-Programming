#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ii pair<int, int>
#define fs first
#define sc second
#define vi vector<int>
#define vii vector<ii>
#define eb emplace_back
#define pb push_back

using namespace std;

priority_queue<ii, vii, greater<ii> > pq;
int n, c, t, d, tc, ic, ans;

int main(){_
    cin >> c >> n;
    for (int i=1; i<=c; ++i){
        pq.push({0, i});
    }
    while (n--){ // for(int i=0; i<l; ++i)
        cin >> t >> d;
        tc = pq.top().fs;
        ic = pq.top().sc;
        pq.pop();

        ans += (tc - t > 20);

        pq.push({max(tc, t) + d, ic});
    }
    cout << ans << endl;
    return 0;
}
