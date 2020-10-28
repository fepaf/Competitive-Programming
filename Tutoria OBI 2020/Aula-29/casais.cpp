#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define end '\n'
#define i64 unsigned long long
#define MOD 1000000007
#define MAX (1<<20)

using namespace std;

i64 f[MAX];
int n;

int main(){_
	f[0] = 1LL;
	f[1] = 2LL;
	for (i64 i=2; i<= 1000000; ++i){
		f[i] = (2 * i * f[i-1]) % MOD;
		f[i] += (((4 * i * (i-1)) % MOD) * f[i-2]) % MOD;
		f[i] %= MOD;
	}
	while (cin >> n){
		cout << f[n] << endl;
	}
	return 0;
}
