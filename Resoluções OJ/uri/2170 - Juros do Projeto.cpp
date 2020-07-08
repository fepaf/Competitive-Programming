// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Juros do Projeto
// Nível: 1
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2170

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

double x,y;
int p;

int main(){_
    while (scanf("%lf %lf",&x,&y)!=EOF) printf("Projeto %i:\nPercentual dos juros da aplicacao: %.2lf \%%\n\n",++p,(((y-x)/x)*100.0));
    return 0;
}

