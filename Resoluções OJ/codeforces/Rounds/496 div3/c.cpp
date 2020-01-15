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
#define vi vector<i64>
#define vvi vector<vi>
#define vii vector<ii>
#define vvii vector<vii>
#define lsb(x) ((x) & (-x))
#define gcd(x,y) __gcd((x),(y))

using namespace std;

i64 n;
vi a;
map<i64,int> f, ok;

int find(i64 x){
	if ((x&(x-1))==0){
		if (f[x]>1){
			ok[x] = -1;
			return 1;
		}
		return 0;
	}
	for (int i=63; i--; ){
		i64 c = (1LL<<i)-x;
		if (c>0 && f.find(c)!=f.end()){
			ok[x] = ok[c] = 1;
		}
	}

	return ok[x];
}

int main(){_
    cin >> n;
    a = vi(n);
    for (int i=0; i<n; ++i){
        cin >> a[i];
        f[a[i]]++;
    }
    int ans = 0;
    for (i64 x : a){
		find(x);
    }
    for (i64 x : a){
        ans += (ok[x]==0);
    }
    cout << ans << endl;
	return 0;
}
