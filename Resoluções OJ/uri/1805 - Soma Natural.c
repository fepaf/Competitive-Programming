// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Soma Natural
// Nível: 1
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1805

#include <stdio.h>
  
int main() {
    long long int a,b;
    scanf("%lli %lli",&a,&b);
    printf("%lli\n",(a+b)*(b-a+1)/2);
    return 0;
}
