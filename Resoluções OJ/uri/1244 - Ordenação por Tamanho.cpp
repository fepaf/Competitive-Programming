// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Ordenação por Tamanho
// Nível: 3
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1244

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);

using namespace std;

typedef struct est{
	int tamanho;
	string palavra;
}est;

bool cmp(est a,est b){
	return a.tamanho>b.tamanho;
}

string s;
est v[51];
int t,n;

int main(){
	cin>>n;
	getline(cin,s);
	while (n--){
		getline(cin,s);
		stringstream ss(s);
		for (t=0;ss>>v[t].palavra;t++) v[t].tamanho=v[t].palavra.length();
		stable_sort(v,v+t,cmp);
		cout<<v[0].palavra;
		for (int i=1;i<t;i++) cout<<" "<<v[i].palavra;
		cout<<endl;
	}
	return 0;
}
