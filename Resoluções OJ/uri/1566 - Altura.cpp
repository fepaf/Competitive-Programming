// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Altura
// Nível: 2
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1566

#include<stdio.h>
#define zera(n) for (i=n;i--;) f[i]=0;
  
int f[211];
  
int main(){
    int nc,h,n,i,j,k;
  
    scanf("%i",&nc);
  
    while (nc--){
        scanf("%i",&n);
        while (n--){
            scanf("%i",&h);
            f[h-20]++;
        }
  
        for (i=0;i<211;i++) {
            if (f[i]){
                printf("%i",i+20);
                for (j=f[i]-1;j--;) printf(" %i",i+20);
                break;
            }
        }
  
        for (k=i+1;k<211;k++) {
            if (f[k]){
                printf(" %i",k+20);
                for (j=f[k]-1;j--;) printf(" %i",k+20);
            }
        }
  
        printf("\n");
        zera(211);
    }
  
    return 0;
}
