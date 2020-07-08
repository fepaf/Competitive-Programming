// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: É Hora do Duelo!
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1896

#include <stdio.h>
#define maxs 1001
 
int n,a,d,h,x,y,z,nok=1,sx[maxs],sy[maxs],sz[maxs],x2,y2,z2;
 
int main(){
    int i,j,k,l;
 
    scanf("%i %i %i %i",&n,&a,&d,&h);
 
    sx[0]=sy[0]=sz[0]=1;
    for (i=0;i<n;i++){
        scanf("%i %i %i",&x,&y,&z);
        x2+=(sx[a-x] && a-x);
        y2+=(sy[d-y] && d-y);
        z2+=(sz[h-z] && h-z);
        for (j=1000;j>=x;j--) sx[j]+=(sx[j-x]!=0);
        for (j=1000;j>=y;j--) sy[j]+=(sy[j-y]!=0);
        for (j=1000;j>=z;j--) sz[j]+=(sz[j-z]!=0);
    }
 
    printf("%c\n",(sx[a] && sy[d] && sz[h] && x2 && y2 && z2 ?'Y':'N'));
 
    return 0;
}
