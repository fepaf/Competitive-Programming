// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Horas e Minutos
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1300

#include<stdio.h>
int main(){
int x;
while(scanf("%i",&x)!=EOF){
    if(x==0 || x%6==0) printf("Y\n");
    else printf("N\n");
}
return 0;
}

