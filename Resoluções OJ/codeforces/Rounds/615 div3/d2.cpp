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

int q,x,y;
map<int, int> f;
set<ii> ds;

int main(){_
    cin >> q >> x;
    for (int i=x;i--;){
        ds.insert({0,i});
    }
    while (q--){
        cin >> y;
        y %= x;
        ds.erase({f[y],y});
        f[y]++;
        ds.insert({f[y],y});
        cout << (ds.begin()->fs*x+ds.begin()->sc) << endl;
    }
    cout << endl;
	return 0;
}
