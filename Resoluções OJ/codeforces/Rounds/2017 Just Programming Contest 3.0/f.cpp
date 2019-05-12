#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define i64 long long
#define INF 0x3f3f3f3f
#define MAX (100123)
#define fs first
#define sc second
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define vvi vector<vi>
#define eb emplace_back
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define lsb(x) (x & -x)

using namespace std;

int t,n,q,pref[MAX],l,r;
i64 a;

int main(){
	for (scanf("%i",&t); t--;){

		scanf("%i %i",&n,&q);

		pref[0] = 0;
		for (int i = 1; i<=n; ++i){
			scanf("%I64d",&a);


			pref[i] = 0;
			while (a>1LL){
				pref[i] += ((a&1LL)+1);
				a >>= 1;
			}
			pref[i] += pref[i-1];
		}
		while (q--){
			scanf("%i %i",&l,&r);
			printf("%i\n",pref[r] - pref[l-1]);;
		}
	}
	return 0;
}
