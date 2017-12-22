// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Qual Triângulo
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2313

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

long long l[3];

int main(){_
	while (cin>>l[0]>>l[1]>>l[2]){
		sort(l,l+3);
		if ((l[0]>=l[1]+l[2]) || (l[1]>=l[0]+l[2]) || (l[2]>=l[1]+l[0])) cout<<"Invalido"<<endl;
		else {
			if ((l[0]!=l[1]) && (l[0]!=l[2]) && (l[2]!=l[1])) cout<<"Valido-Escaleno"<<endl;
			else if ((l[0]==l[1]) && (l[0]==l[2])) cout<<"Valido-Equilatero"<<endl;
			else cout<<"Valido-Isoceles"<<endl;
			cout<<(l[2]*l[2]==l[0]*l[0]+l[1]*l[1] ? "Retangulo: S" : "Retangulo: N")<<endl;
		}
	}
    return 0;
}
