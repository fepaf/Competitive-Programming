// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Duende Perdido
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2294

#include<iostream>
#include<cstdio>
#include<queue>
#include<algorithm>
#define max 10
 
using namespace std;
 
int cave[max+2][max+2];
 
typedef struct posicao{
	int x,y,dist;
}posicao;
 
queue <posicao> fila;
 
main (){
	int n,m,i,j;
	posicao p,newp;
	
	scanf("%i %i",&n,&m);
	
	for (i=0;i<=m+1;i++){
		cave[0][i]=2;
		cave[n+1][i]=2;
	}
	for (i=0;i<=n+1;i++){
		cave[i][0]=2;
		cave[i][m+1]=2;
	}
	
	for (i=1;i<=n;i++){
		for (j=1;j<=m;j++){
			scanf("%i",&cave[i][j]);
			if (cave[i][j]==3){
				p.y=i , p.x=j , p.dist=0;
				cave[i][j]=2;
				fila.push(p);
			}
		}
	}
	
	while (1){
		p=fila.front();
		fila.pop();
		if (!cave[p.y-1][p.x]) break;
		else if (cave[p.y-1][p.x]==1){
			newp=p;
			newp.y-- , newp.dist++;
			fila.push(newp);
			cave[newp.y][newp.x]=2;
		}
		if (!cave[p.y][p.x+1]) break;
		else if (cave[p.y][p.x+1]==1){
			newp=p;
			newp.x++ , newp.dist++;
			fila.push(newp);
			cave[newp.y][newp.x]=2;
		}
		if (!cave[p.y+1][p.x]) break;
		else if (cave[p.y+1][p.x]==1){
			newp=p;
			newp.y++ , newp.dist++;
			fila.push(newp);
			cave[newp.y][newp.x]=2;
		}
		if (!cave[p.y][p.x-1]) break;
		else if (cave[p.y][p.x-1]==1){
			newp=p;
			newp.x-- , newp.dist++;
			fila.push(newp);
			cave[newp.y][newp.x]=2;
		}
	}
	printf("%i\n",p.dist+1);
	return 0;
}
