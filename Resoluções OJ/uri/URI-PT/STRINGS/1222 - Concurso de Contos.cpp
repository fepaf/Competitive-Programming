// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Concurso de Contos
// Nível: 3
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1222

#include <stdio.h>
#include <string.h>

int main(){
    int n,l,c,i,t,qc,nl,np;
    char p[80];
    
    while (scanf("%i %i %i",&n,&l,&c)!=EOF){
    
	    qc=nl=0;
	    for (i=0;i<n;i++){
	         scanf("%s",&p);
	         t=strlen(p);
	         if (qc+t+1<=c+1) qc+=t+1;
	    
		     else{
	             qc=t+1;
	             nl++;
	         }
	    }
	    
	    np=((nl+l-1+((qc+c-2)/c))/l);
	    
	    printf("%i\n",np);    
	}
    return 0;
}
