// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Trapézios de Natal
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1765

#include<stdio.h>
 
int main(){
    int t,i;
    float a,b,q;
 
    while (scanf("%i",&t)==1 && t){
        i=1;
        while (t--){
            scanf("%f %f %f",&q,&a,&b);
            a=(q*(a+b)*5)/2;
            printf("Size #%i:\nIce Cream Used: %.2f cm2\n",i++,a);
        }
        printf("\n");
    }
     
    return 0;
}
