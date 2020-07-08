// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Notas e Moedas
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1021

#include<stdio.h>
#include<math.h>
int main(){
    double v,n[12]={100,50,20,10,5,2,1,0.5,0.25,0.1,0.05,0.01},r[13];
    scanf("%lf",&v);
    printf("NOTAS:\n");
    r[0]=v;
    for (int i=1;i<7;i++){
        printf("%.0lf nota(s) de R$ %.2lf\n",floor(r[i-1]/n[i-1]),n[i-1]);
        r[i]=fmod(r[i-1],n[i-1]);
    }
	printf("MOEDAS:\n");
    for (int i=7;i<13;i++){
        printf("%.0lf moeda(s) de R$ %.2lf\n",floor(r[i-1]/n[i-1]),n[i-1]);
        r[i]=fmod(r[i-1],n[i-1]);
    }
     
    return 0;
}
