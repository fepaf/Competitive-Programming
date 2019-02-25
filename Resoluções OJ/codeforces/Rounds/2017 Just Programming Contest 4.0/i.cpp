#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);
#define vi vector<int>
#define ii pair<int>
#define vii vector<ii>
#define i64 long long
#define MAX (200123)
#define MOD 1000000007
#define eb emplace_back
#define all(x) (x).begin() , (x).end()

int t,ans,c[MAX],n,memo[MAX];
unordered_map <int,vi> pos;

int f(int idx){
	if (idx == n) return 0;

	if (~memo[idx]) return memo[idx];

	int lo=0,hi=pos[c[idx]].size(),mid;
	while (lo < hi){
		mid = lo +(hi-lo)/2;
		if ( pos[ c[idx] ][mid] >= idx) hi = mid;
		else lo = mid+1;
	}

	// cout << idx << " " << c[idx] << ':' << lo << " " << pos[c[idx]][lo] << endl;

	if (lo+1 < pos[c[idx]].size()){
		lo = pos[c[idx]][lo+1];
		return memo[idx] = 1+min(f(idx+1),f(lo));
	}
	else {
		return memo[idx] = 1+f(idx+1);
	}

}


int main(){
	for (scanf("%i",&t); t--;){
		scanf("%i",&n);


		for (int i=0; i<n; ++i){
			scanf("%i",&c[i]);
			// printf("%i\n",c[i]);
			pos[c[i]].eb(i);
		}

		for(int i=n;i--;){
			memo[i] = -1;
		}

		printf("%i\n",f(0)-1);

		pos.clear();
	}


	return 0;
}
