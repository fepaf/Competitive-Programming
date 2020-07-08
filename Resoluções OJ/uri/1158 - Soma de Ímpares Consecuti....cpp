// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Soma de Ímpares Consecuti...
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1158

#include<bits/stdc++.h>

using namespace std;

long long n,i,x,y,s;

int main(){
	cin>>n;
	while(n--){
		cin>>x>>y;
		s=i=0;
		while (i<y){
			if (x%2) s+=x,i++;
			x++;
		}
		cout<<s<<endl;
	}
	return 0;
}
