// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Pedágio
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2230

#include <iostream>
#include <cstring>
#include <set>
#include <queue>
#include <algorithm>
 
 
using namespace std;
 
int c,e,l,p,x,y,t,vert,peso,mark[51],dest[50],tam,i;
 
main (){
	for (t=1;;t++){
		tam=0;
		set <int> adj[51];
		set <int>::iterator its;
		queue <pair<int,int> > bfs;
		
		memset(mark,0,sizeof(mark));
		
		scanf ("%i %i %i %i",&c,&e,&l,&p);
		if ((!c)&&(!e)&&(!l)&&(!p)) break;
		
		while (e--){
			scanf("%i %i",&x,&y);
			adj[x].insert(y);
			adj[y].insert(x);
		}
		
/*		printf("\n\n");
		
		for (i=1;i<=c;i++){
			printf("%i: ",i);
			for (its=adj[i].begin();its!=adj[i].end();its++) printf("%i ",*its);
			printf("\n\n");
		}
		
		for (i=1;i<=c;i++) printf("%i ",mark[i]);
		
		printf("\n\n");*/
		
		bfs.push(make_pair(l,p));
		
		while (!bfs.empty()){
			vert=bfs.front().first;
			peso=bfs.front().second;
			
			bfs.pop();
			
			if (mark[vert]) continue;
			mark[vert]=1;
			
			for (its=adj[vert].begin();its!=adj[vert].end();its++){
				if ((!mark[*its])&&(peso)){
					bfs.push(make_pair(*its,peso-1));
					adj[0].insert(*its);
				}
			}
		}
		
		//sort(dest,dest+tam);
		
		printf("Teste %i\n",t);
		for (its=adj[0].begin();its!=adj[0].end();its++) printf("%i ",*its);
		printf("\n\n");
	}
	return 0;
}
