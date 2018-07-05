// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Reservatório de Mel
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2029

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'

using namespace std;

double v,d,h,a,pi=3.14;

int main(){_
	while (cin>>v>>d){
		h=(v*4)/d/d/pi;
		a=d*d*pi/4;
		cout<<fixed<<setprecision(2);
		cout<<"ALTURA = "<<h<<"\nAREA = "<<a<<endl;
	}
	return 0;
}
