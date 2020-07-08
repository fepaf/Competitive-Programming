// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Alarme Despertador
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1103

#include<stdio.h>

int main(){
  int h1,m1,h2,m2;
  while(scanf("%i %i %i %i",&h1,&m1,&h2,&m2)==4 &&(h1||m1||h2||m2)){
  printf("%i\n",((((h2-h1)*60)+m2-m1+1440)%1440));
  }
return 0;
}
