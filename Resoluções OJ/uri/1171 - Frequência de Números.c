// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Frequência de Números
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1171

#include<stdio.h>
 
int f[2000];
 
int main(){
    int i,x,n;
     
    scanf("%i",&n);
     
    for (i=n;i--;){
        scanf("%i",&x);
        f[x-1]++;
    }
     
    for (i=0;i<2000;i++) if (f[i]) printf("%i aparece %i vez(es)\n",i+1,f[i]);
     
    return 0;
}
