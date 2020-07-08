// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Soma de Ímpares Consecuti...
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1099

#include<stdio.h>
#define min(x,y) (x<y?x:y)
#define max(x,y) (x>y?x:y)
int main(){
    int  n,x,y,i,s;
 
 	scanf("%i",&n);
 	while (n--){
 		scanf("%i %i",&x,&y);
	 	for (i=min(x,y)+1,s=0;i<max(x,y);i++){s+=(i%2?i:0);}	
	 	printf("%i\n",s);
 	}
		
    return 0;
}

