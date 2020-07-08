// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Cartões II
// Nível: 5
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1545

#include<stdio.h>
#define ma(x,y) (x>y?x:y)
#define me(x,y) (x>y?x:y)
#define init(v,t) for(i=t;i--;) v[i]=0;
 
long long int v[10000],pd[10000];
int n,k,c,i;
 
int main(){
    while (scanf("%i",&n)!=EOF){
        scanf("%lli",&v[0]);
        for (i=1;i<n;i++){
            scanf("%lli",&v[i]);
            pd[i-1]=ma(v[i],v[i-1]);
        }        
         
        k=1;    
        for (c=n-2;c--;){
            if (c%2==0){for (i=1;i<c+2;i++){pd[i-1]=ma(v[k+i]+pd[i-1],v[i-1]+pd[i]);}}
            else {for (i=1;i<c+2;i++){pd[i-1]=ma(pd[i-1],pd[i]);}}
            ++k;
        }                                                                            
        printf("%lli\n",pd[0]);
        init(pd,n);
    }
    return 0;
}
