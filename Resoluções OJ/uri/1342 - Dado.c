// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Dado
// Nível: 3
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1342

#include <stdio.h>
#define z1(n) for (i=n;i--;) pos[i]=0;
#define z2(n) for (i=n;i--;) free[i]=1;
 
int p,s,i,k,d1,d2,t[3],pos[10],free[10],w,j,f,n;
 
int main(){
    while (scanf("%i %i",&p,&s) && (p||s)){
        scanf("%i %i %i",&t[0],&t[1],&t[2]);
        scanf("%i",&n);
        z2(p);
        z1(p);
        f=0;
        for (i=j=0;i<n;i++,j=(j+1)%p){
            scanf("%i %i",&d1,&d2);
            while (!free[j]){
                free[j]=1;
                j=(j+1)%p;
            }
            pos[j]+=d1+d2;
            if (pos[j]>s && !f) w=j+1 , f=1;
            else for (k=0;k<3;k++) free[j]*=(pos[j]!=t[k]);
        }
        printf("%i\n",w);
    }
    return 0;
}
