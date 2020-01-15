#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<20)
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

i64 n;
vi a;
map<i64,int> vis, ok;


int main(){_
    cin >> n;
    a = vi(n);
    for (int i=0; i<n; ++i){
        cin >> a[i];
        vis[a[i]]++;
    }
    int ans = 0;
    sort(all(a));
    for (int i=0; i<n; ++i){
         (!find(a[i]));
    }
    for (int x : a){
        ans += (ok[x]==0);
    }
    cout << ans << endl;
	return 0;
}
