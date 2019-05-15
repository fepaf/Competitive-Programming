#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define i64 long long
#define MAXR (1<<7)
#define MAXK (1<<5)

using namespace std;

i64 memo[MAXR][MAXR][MAXK], s[MAXK];

i64 r, k;

i64 f(i64 last, i64 soma, i64 rest){
	if (soma > r) return 0;
	if (rest == 0) return (soma == r);
	
	if (~memo[last][soma][rest]) return memo[last][soma][rest];
	
	i64 ans = 0;
	
	for (i64 i=last+1; i<=r; ++i){
		ans += f(i, soma + i, rest-1);
	}
	
	return memo[last][soma][rest] = ans;
}


int main(){_
	
	memset(memo,-1,sizeof(memo));
	
	while (cin >> r >> k){
		cout << f(0,0,k) << endl;
	}
	
	return 0;
}
