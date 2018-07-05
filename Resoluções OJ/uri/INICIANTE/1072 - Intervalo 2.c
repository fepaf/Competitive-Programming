// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Intervalo 2
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1072

#include<stdio.h>
 
int main(){
    int  n,x,in=0,out=0;
    scanf("%i",&n);
    while (n--){
    	scanf("%i",&x);
    	if (10<=x && x<=20) in++;
    	else out++;
    }
    printf("%i in\n%i out\n",in,out);
    return 0;
}
