// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Jollo
// Nível: 4
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1321

#include<bits/stdc++.h>

using namespace std;

int a,b,c,boy[3],wins,resp,all,i,j,ix[6]={0,0,1,1,2,2},iy[6]={1,2,0,2,0,1},iz[6]={2,1,2,0,1,0};

int main(){
	while ((cin>>a>>b>>c>>boy[0]>>boy[1])&&(a||b||c||boy[0]||boy[1])){
		for (resp=-1,i=1;i<=52;i++){
			if ((i==a)||(i==b)||(i==c)||(i==boy[0])||(i==boy[1])) continue;
			all=1 , boy[2]=i;
			for (j=6;j--;){
				wins=((boy[ix[j]]>a)+(boy[iy[j]]>b)+(boy[iz[j]]>c));
				all*=(wins>1);
			}
			if (all){
				resp=boy[2];
				break;
			}
		}
		cout<<resp<<endl;
	}
	return 0;
}
