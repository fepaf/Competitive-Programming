// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Movimentos do Cavalo
// Nível: 4
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1100

#include<bits/stdc++.h>
#define z(x) for (i=8;i--;) for (j=8;j--;) vis[i][j]=x;

using namespace std;

typedef struct{
	int d,i,j;
}est;

est a,b,x,y;
int i,j,k,xa,ya,xb,yb,resp,vis[8][8],dj[]={-2,-1,1,2,2,1,-1,-2},di[]={-1,-2,-2,-1,1,2,2,1};
char c1,c2,s[6];
queue <est> bfs;

int main(){
	while (gets(s)){
		a.j=s[0]-'a';
		a.i=s[1]-'1';
		b.j=s[3]-'a';
		b.i=s[4]-'1';
		z(-1);
		bfs.push(a);
		a.d=resp=0;
		while (!bfs.empty()){
			x=bfs.front();
			bfs.pop();
			if (x.i==b.i && x.j==b.j){
				resp=x.d;
				break;
			}
			if (vis[x.i][x.j]!=-1 || x.i<0 || x.i>7 || x.j<0 || x.j>7) continue;
			vis[x.i][x.j]=x.d;
			for (k=8;k--;){
				y.i=x.i+di[k];
				y.j=x.j+dj[k];
				y.d=x.d+1;
				bfs.push(y);
			}
		}

		while (!bfs.empty()) bfs.pop();

		cout<<"To get from "<<s[0]<<s[1]<<" to "<<s[3]<<s[4]<<" takes "<<resp<<" knight moves."<<endl;
	}
	return 0;
}

