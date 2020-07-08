// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Juros Sobre o Empréstimo
// Nível: 2
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2033

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define ll long long

using namespace std;

double c,i,js,jc;
int n;

int main(){_
    cout<<fixed<<setprecision(2);
    while (cin>>c>>i>>n){
        js = (1+i*n)*c;
        jc = pow(1+i,n)*c;
        cout<<"DIFERENCA DE VALOR = "<<fabs(js-jc)<<endl;
        cout<<"JUROS SIMPLES = "<<fabs(js-c)<<endl;
        cout<<"JUROS COMPOSTO = "<<fabs(jc-c)<<endl;        
    }
    return 0;
}

