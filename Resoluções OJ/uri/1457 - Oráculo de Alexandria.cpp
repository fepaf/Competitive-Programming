// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Oráculo de Alexandria
// Nível: 2
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1457

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

long long n,t,i,r,k;
string s;
char s1[21];

int main(){_
	cin>>t;
	while (t--){
		cin>>n>>s;
		//scanf("%i%s",&n,&s1);
		k=s.size();
		//k=strlen(s1);
		for (i=n,r=1;i>0;i-=k) r*=i;
		cout<<r<<endl;
	}
	return 0;
}
