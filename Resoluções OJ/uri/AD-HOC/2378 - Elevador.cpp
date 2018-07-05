// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Elevador
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2378

#include<stdio.h>
 
main (){
    int s,e,n,c,cap;
    char r;
 
    scanf("%i %i",&n,&c);
 
    cap=0;
    r='N';
 
    while (n--){
        scanf("%i %i",&s,&e);
        cap+=(e-s);
        if (cap > c) r='S';
    }
 
    printf("%c\n",r);
 
    return 0;
}
