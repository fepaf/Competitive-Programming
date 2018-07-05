// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Ajude o Cupido
// Nível: 3
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1750

#include<stdio.h>
#include<stdlib.h>
#define inf 10000
#define min(x,y) (x<y?x:y)
 
int cmp(const void *a,const void *b){
    return (*(int*)a)-(*(int*)b);
}
 
int main(){
    int n,r,s,d,t[1000],i,j;
     
    scanf("%i",&n);
     
    for (i=0;i<n;i++) scanf("%i",&t[i]);
     
    qsort(t,n,sizeof(t[0]),cmp);
     
    r=inf;
    for (i=0;i<2;i++){
        s=0;
        for (j=0;j<n;j+=2){
            d=abs(t[(j+i)%n]-t[(j+i+1)%n]);
            s+=min(d,24-d);
        }
        r=min(r,s);
    }
     
    printf("%i\n",r);
     
    return 0;
}
