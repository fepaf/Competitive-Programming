#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);
#define vi vector<int>
#define ii pair<int>
#define vii vector<ii>
#define i64 long long
#define MAX (1<<20)
#define MOD 1000000007

i64 ans,a;
int n,t;

int main(){_

	for (scanf("%i",&t); t--;){
		scanf("%i",&n);
		ans = 0;
		for (int i=0; i<n; ++i){
			scanf("%i",&a);
			ans = (ans*a+ans+a)%MOD;
		}

		printf("%i\n",ans);
	}

	return 0;
}
