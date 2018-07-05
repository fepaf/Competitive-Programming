// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Assigning Teams
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2345

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int a,b,c,d,ans;

int main(){
	while (cin>>a>>b>>c>>d){
		ans=a+b+c+d;
		ans=min(ans,abs(a+b-c-d));
		ans=min(ans,abs(a+c-b-d));
		ans=min(ans,abs(a+d-c-b));
		ans=min(ans,abs(c+b-a-d));
		ans=min(ans,abs(d+b-c-a));
		ans=min(ans,abs(c+d-a-b));
		cout<<ans<<endl;		
	}
	return 0;
}
