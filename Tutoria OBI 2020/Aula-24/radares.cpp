#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define INF 0x3f3f3f3f
#define MAX (1<<20)

using namespace std;

int pd[MAX],pos[MAX],v[MAX],l[MAX],n,k,t;

int main(){_
	scanf("%i",&t);
	while (t--){
		scanf("%i %i",&n,&k);
		for (int i=1;i<=n;i++){
			scanf("%i",&pos[i]);
		}
		for (int i=0;i<=pos[n];i++){
			pd[i]=l[i]=0;
		}
		for (int i=1;i<=n;i++){
			scanf("%i",&v[i]);
			l[pos[i]]=max(l[pos[i]],v[i]);
		}
		for (int p=1;p<k;p++){
			pd[p] = max(pd[p-1],l[p]);
		}
		for (int p=k;p<=pos[n];p++){
			pd[p] = max(pd[p-1],pd[p-k]+l[p]);
		}
        // f(pos) = max(f(pos-k)+l[pos], f(pos-1)) se p>=k
        // f(pos) = f(pos-1) se não tem radar lá
        // f(pos) = l[pos] se tem radar lá e l[pos] é maior valor de radar na posição pos
		printf("%i\n",pd[pos[n]]);
	}
	return 0;
}
