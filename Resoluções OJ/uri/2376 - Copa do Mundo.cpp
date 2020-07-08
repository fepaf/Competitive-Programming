// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Copa do Mundo
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2376

#include <stdio.h>
 
main(){
int m,n,i,j,jpr=8,at[16];
 
for (i=0;i<16;i++) at[i]=i;
 
while(true){
for (i=j=0;j<jpr;i+=2,j++){
    scanf("%d %d",&m,&n);
    if (m>n) at[j]=at[i];
    else at[j]=at[i+1];
}
jpr/=2;
if (!jpr) break;
}
 
printf("%c\n",at[0]+'A');
 
return 0;
}
 
