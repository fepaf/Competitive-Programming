// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Fibonacci em Vetor
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1176

#include <stdio.h>
 
int main(){
    long long int n,t,i,a1=1,a2=0,vet[61];
     
    vet[0]=0;
    for (i=1;i<=60;i++){
        vet[i]=a1+a2;
        a1=a2;
        a2=vet[i];
    }
     
    scanf("%lli",&t);
     
    while (t--){
        scanf("%lli",&n);
        printf("Fib(%lli) = %lli\n",n,vet[n]);
    }
     
    return 0;
}
