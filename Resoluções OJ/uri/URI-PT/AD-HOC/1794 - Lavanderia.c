// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Lavanderia
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1794

#include <stdio.h>
 
int main(){
    int n,la,lb,sa,sb;
    scanf("%i %i %i %i %i",&n,&la,&lb,&sa,&sb);
 
 
    printf("%s\n",(la<=n && n<=lb && sa<=n && n<=sb)?"possivel":"impossivel");
    return 0;
}
