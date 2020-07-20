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
int n, l, t, tv, iv;
vi cnt;

int main(){_
    cin >> n >> l;
    cnt = vi(n+1, 0);
    for (int i=1; i<=n; ++i){
        pq.push({0, i});
    }
    while (l--){ // for(int i=0; i<l; ++i)
        cin >> t;
        tv = pq.top().fs;
        iv = pq.top().sc;
        pq.pop();
        
        ++cnt[iv];

        pq.push({tv+t, iv});
    }
    for (int i=1; i<=n; ++i){
        cout << i << ' ' << cnt[i] << '\n' ;
    }
    return 0;
}