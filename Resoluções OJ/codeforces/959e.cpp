#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define i64 unsigned long long

using namespace std;

i64 ans, n;

int main(){_
	while (cin >> n){
		ans = 0LL; --n;
		for (int i=0; n; ++i){
			ans += (((n>>1LL) + (n%2==1)) << i);
			n >>= 1LL;
		}	
		cout << ans << endl;
	}
}
