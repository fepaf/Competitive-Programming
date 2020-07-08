// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Formatação Monetária
// Nível: 2
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1309

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);

using namespace std;

string d;
int c,i;

int main(){_
	while (cin>>d>>c){
		for (i=d.length()-3;i>0;i-=3) d.insert(i,",");
		d.insert(0,"$");
		printf("%s.%02i\n",d.c_str(),c);
	}
	return 0;
}
