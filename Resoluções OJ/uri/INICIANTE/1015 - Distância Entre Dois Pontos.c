// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Distância Entre Dois Pontos
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1015

#include<stdio.h>
#include<math.h>
int main(){
    double x1,y1,x2,y2,distx,disty,dist;
     
    scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);
    distx=(x2-x1)*(x2-x1);
    disty=(y2-y1)*(y2-y1);
    dist=sqrt(distx+disty);
    printf("%.4lf\n",dist);
     
    return 0;
}
