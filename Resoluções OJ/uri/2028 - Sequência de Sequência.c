// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Sequência de Sequência
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2028

#include<stdio.h>
#include<math.h>

int main(){
    int n,x,l,t=1,i,p;
    while (scanf("%i",&n)!=EOF){
        if (!n){
            printf("Caso %i: 1 numero\n0\n\n",t++);
        }
        else{
            l=(n*(n+1)/2);
            printf("Caso %i: %i numeros\n0",t++,l+1);
            for (i=0;i<l;i++){
                x=(sqrt(8*i+1)+1)/2;
                printf(" %i",x);
            }
            printf("\n\n");
        }
    }
    return 0;
}

