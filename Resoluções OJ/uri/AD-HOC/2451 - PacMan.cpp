// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: PacMan
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2451

#include<iostream>
#include<string>
#include<cstring>
 
#define max 100
 
using namespace std;
 
main (){
	int n,qmax,q,i,j,passo;
	string tab[max];
	
	cin>>n;
	
	for (i=0;i<n;i++){
		cin>>tab[i];
	}
	
	passo=1;
	
	qmax=q=0;
	
	for (i=0;i<n;i++){
		for (j=((passo>0)? 0:n-1);j!=((passo>0)? n:-1);j+=passo){
			if (tab[i][j]=='o') q++;
			if (tab[i][j]=='A'){
				if (q>qmax) qmax=q;
				q=0;
			}
		}
		passo*=-1;
	}
	
	if (q>qmax) qmax=q;
	
	cout<<qmax<<endl;
	
	return 0;
}
