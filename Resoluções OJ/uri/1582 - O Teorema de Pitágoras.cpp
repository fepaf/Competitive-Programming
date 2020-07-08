// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: O Teorema de Pitágoras
// Nível: 1
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1582

#include <bits/stdc++.h>

using namespace std;

int x,y,z;

void test(int h, int c1, int c2){
	cout<<"tripla";
	if (h*h==c1*c1+c2*c2){
		cout<<" pitagorica";
		if (__gcd(__gcd(c1,c2),h)==1) cout<<" primitiva";
	}
	cout<<endl;
}

int main(){
	while (cin>>x>>y>>z){
		if (x==max(max(x,y),z)) test(x,y,z);
		else if (y==max(max(x,y),z)) test(y,z,x);
		else test(z,x,y);
	}
	return 0;
}
