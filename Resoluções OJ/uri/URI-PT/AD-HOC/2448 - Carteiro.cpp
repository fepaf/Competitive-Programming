// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Carteiro
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2448

#include<iostream>
#include<map>
#include<math.h>
 
using namespace std;
 
main(){
	int n,m,res=0,i,ant,nc;
	map<int,int> casa;
	
	cin>>n>>m;
	
	for (i=0;i<n;i++){
		cin>>nc;
		casa[nc]=i;//cuidado! ele armazena as chaves nc ordenadamente mesmo que não tenha sido assim na hora da entrada;
	}
	
	ant=casa.begin()->first;//começa já com o número da primeira casa
	
	while(m--){//só pode porque não se vai mais usar o valor de m
		cin>>nc;
		res+=(fabs(casa[nc]-casa[ant]));
		ant=nc;
	}
	
	cout<<res<<endl;
	
	return 0;
}
