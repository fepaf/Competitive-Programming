// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Fusões
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2380

#include<stdio.h>
 
int bco[100000],i,j,n,k;
char op;
 
int id (int cod){
    return (bco[cod]==cod ? cod : bco[cod]=id(bco[cod]));
}
 
main (){
    scanf ("%i %i",&n,&k);
     
    for (i=0;i<n;i++) bco[i]=i;
     
    while(k--){
        scanf(" %c %i %i",&op,&i,&j);
        i=id(i-1);
        j=id(j-1);
        if (op=='C') printf("%s\n",(i==j ? "S":"N"));
        else bco[i]=j;
    }
     
    return 0;
} 
