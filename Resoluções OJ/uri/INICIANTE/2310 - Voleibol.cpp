// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Voleibol
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2310

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

string nome;
int n;
double s,b,a,s1,b1,a1,ts,tb,ta,ts1,tb1,ta1;	

int main(){_
	cin>>n;
	while (n--){
		cin>>nome>>s>>b>>a>>s1>>b1>>a1;
		ts+=s, tb+=b, ta+=a, ts1+=s1, tb1+=b1, ta1+=a1;;
	}
	cout<<"Pontos de Saque: "<<fixed<<setprecision(2)<<setfill('0')<<(ts1/ts)*100<<" %."<<endl;
	cout<<"Pontos de Bloqueio: "<<fixed<<setprecision(2)<<setfill('0')<<(tb1/tb)*100<<" %."<<endl;
	cout<<"Pontos de Ataque: "<<fixed<<setprecision(2)<<setfill('0')<<(ta1/ta)*100<<" %."<<endl;	
    return 0;
}
