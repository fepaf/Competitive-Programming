// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Espiral
// Nível: 4
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1935

#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	long long c,n,b,x,y,dx[4]={1,0,-1,0},dy[4]={0,1,0,-1},step,dir;
	cin>>n>>b;
	c=(n-sqrt(n*n-b))/2;
	b-=4*c*(n-c);
	x=c , y=c+1;
	step=n-2*c;
	dir=0;
	while (b>0){
		x+=dx[dir]*min(b,step);
		y+=dy[dir]*min(b,step);
		b-=step;
		if (!dir) step--;
		dir++;
	}
	cout<<y<<" "<<x<<endl;
	return 0;
}
