#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX 1000123
#define i64 long long
#define all(x) (x).begin() , (x).end()
#define eb emplace_back
#define vi vector<int>

using namespace std;

int lim[MAX],n,h,m,l,r,x;

int main(){_
	while (cin >> n >> h >> m){
		for (int i=1; i<=n; ++i){
			lim[i] = INF;		
		}
		while (m--){
			cin >> l >> r >> x;
			for (int i=l; i<=r; ++i){
				lim[i] = min(lim[i],x);
			}
		}
		
		i64 ans = 0;
		for (int i=1; i<=n; ++i){
			ans += min(h*h,lim[i]*lim[i]);
		}
		cout << ans << endl;
	}

	return 0;
}
