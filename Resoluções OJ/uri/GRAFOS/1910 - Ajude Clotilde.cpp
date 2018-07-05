// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Ajude Clotilde
// Nível: 4
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1910

#include<bits/stdc++.h>
#define maxn 1000123
#define forbiden -1
#define zerar(v,n) for (i=n;i--;) v[i]=0;

using namespace std;

int est[maxn],i,j,k,o,d,n,best,x,dist;
queue < pair <int, int> > fila;

int main(){
	while ((cin>>o>>d>>k)&&(o||d||k)){
		for (i=k;i--;){
			cin>>n;
			est[n]=forbiden;
		}
		
		fila.push(make_pair(o,0));
		
		best=-1;
		
		while (!fila.empty()){
			x=fila.front().first;
			dist=fila.front().second;
			fila.pop();
			
			if (x<1 || x>100000 || est[x]==forbiden) continue;
			
			if (x==d){
				best=dist;
				break;
			}
			est[x]=forbiden;
			
			fila.push(make_pair(x+1,dist+1));
			fila.push(make_pair(x-1,dist+1));
			fila.push(make_pair(x*2,dist+1));
			fila.push(make_pair(x*3,dist+1));
			if (x%2==0) fila.push(make_pair(x/2,dist+1));
		}
		
		cout<<best<<endl;
		zerar(est,100001);
		while (!fila.empty()) fila.pop();
	}
	return 0;
}
