// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Radares
// Nível: 5
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1689

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define vi vector<int>
#define INF 0x3f3f3f3f
#define MAX (1<<20)

using namespace std;

long long pd[MAX],pos[MAX],v[MAX],l[MAX],n,k,t;

int main(){_
	cin>>t;
	while (t--){
		cin>>n>>k;
		for (int i=1;i<=n;i++){
			cin>>pos[i];
		}
		for (int i=0;i<=pos[n];i++){
			pd[i]=l[i]=0;
		}
		for (int i=1;i<=n;i++){
			cin>>v[i];
			l[pos[i]]=max(l[pos[i]],v[i]);
		}
		for (int p=1;p<=pos[n];p++){
			pd[p] = max(pd[p-1],(p>=k)*pd[p-k]+l[p]);
			// cout<<"("<<p<<")"<<pd[p]<<" ";//debug
		}
		// cout<<endl;//debug
		cout<<pd[pos[n]]<<endl;
	}
	return 0;
}

