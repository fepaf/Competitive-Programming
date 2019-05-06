#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX 100123
#define i64 long long
#define all(x) (x).begin(),(x).end()
#define eb emplace_back
#define vi vector<int>
#define vvi vector<vi>
#define sz(x) ((int)(x).size())
#define fs first
#define sc second

using namespace std;


int x[MAX], n, k;
i64 ans;
vvi pos;

int main(){_
	while (cin >> n >> k){
		ans = 3*n-2;
		
		pos = vvi(n+2);
		for (int i=0; i<k; ++i){
			cin >> x[i];
			pos[x[i]].eb(i);
		}
		
		for (int chave=1; chave<=n; ++chave){
			if (sz(pos[chave]) != 0){
				--ans;
				int primeiro = pos[chave][0];
				ans -= (upper_bound(all(pos[chave-1]), primeiro) != pos[chave-1].end());
				ans -= (upper_bound(all(pos[chave+1]), primeiro) != pos[chave+1].end());
				
			}
		}	
			
		cout << ans << endl;
	}

	return 0;
}
