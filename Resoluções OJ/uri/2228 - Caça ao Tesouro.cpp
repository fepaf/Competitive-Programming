// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Caça ao Tesouro
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2228

#include<stdio.h>
#include<string.h>
#define maxn 100
#define maxc 10500
#define max(x,y) (x>y?x:y)
 
char pode[maxc];
int i,j,teste,x,y,n,obj,v[maxn],smax;
 
main(){
	for (teste=1;;teste++){
		scanf("%i %i %i",&x,&y,&n);
		
		if (!(x||y||n)) break;
		
		obj=(x+y);
		
		for(i=0;i<n;i++){
			scanf("%i",&v[i]);
			obj+=v[i];
		}
		
		printf("Teste %i\n",teste);
		if (obj%2){
			printf("N\n\n");
		}
		else{
			memset(pode,0,sizeof(pode));
			obj=(obj/2)-max(x,y);
			smax=0;
			pode[0]=1;
			
			for (i=0;i<n && !pode[obj];i++){
				for (j=smax;j>=0;j--){
					if (pode[j])
						pode[j+v[i]]=1;
				}
				smax+=v[i];
			}
			
			printf("%c\n\n",(pode[obj] ? 'S':'N'));
		}
	}
	return 0;
}
