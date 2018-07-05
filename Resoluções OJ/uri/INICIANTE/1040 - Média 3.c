// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Média 3
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1040

#include<stdio.h>
int main(){
    double n1,n2,n3,n4;
    scanf("%lf %lf %lf %lf",&n1,&n2,&n3,&n4);
    n1=(2*n1+3*n2+4*n3+n4)/10;
    //cl(n1);
    printf("Media: %.1f\n",n1);
    if (n1>=7) printf("Aluno aprovado.\n");
    else if (n1<5) printf("Aluno reprovado.\n");
    else{
        printf("Aluno em exame.\n");
        scanf("%lf",&n2);
        printf("Nota do exame: %.1f\n",n2);
        n3=(n1+n2)/2;
        if (n3>=5) printf("Aluno aprovado.\n");
        else printf("Aluno reprovado.\n");
        printf("Media final: %.1f\n",n3);  
    }
    return 0;
}
