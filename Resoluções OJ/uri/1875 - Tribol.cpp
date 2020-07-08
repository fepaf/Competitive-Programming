// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Tribol
// Nível: 1
// Categoria: GEOMETRIA COMPUTACIONAL
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1875

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int c,p,r,g,b;
char m,s;

int main(){_
	cin>>c;
	while (c--){
		cin>>p;
		r=g=b=0;
		while (p--){
			cin>>m>>s;
			if (m=='R') r+=(s=='G')*2+(s=='B');
			else if (m=='G') g+=(s=='B')*2+(s=='R');
			else b+=(s=='R')*2+(s=='G');
		}
		if ((r==g)&&(g==b)) cout<<"trempate";
		else if ((r==g)&&r||(g==b)&&g||(b==r)&&b)cout<<"empate";
		else if (r>g && r>b) cout<<"red";
		else if (g>b) cout<<"green";
		else cout<<"blue";
		cout<<endl;
	}
	return 0;
}
