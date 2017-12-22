// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Olimpíadas de Natal
// Nível: 3
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2018

#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

struct est{
    int ouro,prata,bronze;
    est(){
        ouro=prata=bronze=0;
    }
};

struct est2{
    string nome;
    est med;
};

bool cmp(est2 a, est2 b){
    if (a.med.ouro==b.med.ouro)
        if (a.med.prata==b.med.prata)
            if (a.med.bronze==b.med.bronze) return a.nome<b.nome;
            else return a.med.bronze>b.med.bronze;
        else return a.med.prata>b.med.prata;
    else return a.med.ouro>b.med.ouro;
}

map <string,est> pais;
map <string,est>::iterator it;
string prova, p;
est2 pos[300];
int t,i;

int main() {_
	while (getline(cin,prova)){
	    getline(cin,p);
	    pais[p].ouro++;
	    getline(cin,p);
	    pais[p].prata++;
	    getline(cin,p);
	    pais[p].bronze++;
	}
	for (it=pais.begin();it!=pais.end();it++){
	    pos[t].nome=it->first;
	    pos[t++].med=it->second;
	}
	stable_sort(pos,pos+t,cmp);
	cout<<"Quadro de Medalhas"<<endl;
	for (i=0;i<t;i++){
	    cout<<pos[i].nome<<" "<<pos[i].med.ouro<<" "<<pos[i].med.prata<<" "<<pos[i].med.bronze<<endl;
	}
	return 0;
}

