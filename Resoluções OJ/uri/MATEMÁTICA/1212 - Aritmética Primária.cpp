// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Aritmética Primária
// Nível: 2
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1212

#include <stdio.h>
 
int main(){
    long long int n1,n2,c,d,r,d1,d2;
     
    while (scanf("%lli %lli",&n1,&n2) && (n1||n2)){
        d1=n1, d2=n2 , c=r=0;
         while (d1||d2){
            c=((d1%10)+(d2%10)+c)/10;
            d1/=10;
            d2/=10;
            r+=c;
         }
         if (r==1) printf("1 carry operation.\n");
         else if (r) printf("%lli carry operations.\n",r);
         else printf("No carry operation.\n");
    }
     
    return 0;
}
