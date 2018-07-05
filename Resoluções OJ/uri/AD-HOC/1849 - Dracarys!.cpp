// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Dracarys!
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1849

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int cd,ld,cv,lv,l,ans;

int men(int a,int b, int c){
	return min(min(a,b),c);
}

int main(){_
	while (cin>>ld>>cd>>lv>>cv){
		ans=0;
		l=men(ld+lv,cd,cv);
		ans=max(ans,l*l);
	
		l=men(cd+cv,ld,lv);
		ans=max(ans,l*l);
	
		l=men(ld+cv,cd,lv);
		ans=max(ans,l*l);
	
		l=men(cd+lv,ld,cv);
		ans=max(ans,l*l);	
	
		cout<<ans<<endl;
	}
	return 0;
}
