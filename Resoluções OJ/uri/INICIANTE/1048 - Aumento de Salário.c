// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Aumento de Salário
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1048

#include<stdio.h>

int main(){
	double s,p;
	scanf("%lf",&s);
	if (s<=400) p=0.15;
	else if (s>400 && s<=800) p=0.12;
	else if (s>800 && s<=1200) p=0.1;
	else if (s>1200 && s<=200) p=0.07;
	else p=0.04;
	printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %.0lf %%\n",s*(1+p),s*p,p*100);
	return 0;
}
