// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Presentes de Natal
// Nível: 2
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2022

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);

using namespace std;

typedef struct est{
    string o;
    int e;
    double p;
}est;

bool comp(est a, est b){
    if (a.e==b.e){
        if (a.p==b.p) return a.o<b.o;
        else return a.p<b.p;
    }
    else return a.e>b.e;
}

est pres[102];

int q,i;
string nome,s;

int main(){_
    while (cin>>nome>>q){
        for (i=q;i--;){
	    getline(cin,s);
            getline(cin,pres[i].o);
	    cin>>pres[i].p>>pres[i].e;
        }
        //for (i=q;i--;) cout<<pres[i].o<<" "<<pres[i].p<<" "<<pres[i].e<<endl;
        sort(pres,pres+q,comp);
        cout<<"Lista de "<<nome<<endl;
	cout << fixed << setprecision(2);        
	for (i=0;i<q;i++){
            cout<<pres[i].o<<" - R$"<<pres[i].p<<endl;
        }
        cout<<endl;
    }
    return 0;
}

