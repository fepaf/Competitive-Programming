#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);
#define vi vector<int>
#define ii pair<int>
#define vii vector<ii>
#define MAX (1<<20)
#define lsb(x) (x & -x)

int t;
int a[MAX],menores[MAX],maiores[MAX];
int ft[MAX];

void update(int idx, int val){
	while (idx <= n){
		ft[idx] += val;
		idx += lsb(idx);
	}
}

int query(int idx){
	int ans=0;
	while (idx > 0){
		ans += ft[idx];
		idx -= lsb(idx);
	}
	return ans;
}


int main(){

	for (scanf("%i",&t); t--;){
		scanf("%i",&n);

		for (int i=0; i<n; ++i){
			scanf("%i",&a[i]);
			menores[i] = query(a[i]);
			printf("%i ",menores[i]);
			update(a[i],1);
		}

		printf("%i\n",ans);
	}

	return 0;
}
