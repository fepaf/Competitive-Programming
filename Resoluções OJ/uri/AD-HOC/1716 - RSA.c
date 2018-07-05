// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: RSA
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1716

#include<stdio.h>


long long int exp(long long int b, long long int e,long long int m) {
    long long int x;
    if (e==0) return 1;
    if (e==1) return b;

    if (e%2) return (b*exp(b,e-1,m))%m;
    else {
        x=exp(b,e/2,m);
        return (x*x)%m;
    }
}

void mdc(long long int a, long long int b, long long int *alpha) {
    long long int x[2] = {1, 0},y[2] = {0, 1},X,Y,quociente,temp;

    while (a % b != 0) {
        quociente = a / b;

        temp = a;
        a = b;
        b = temp % b;

        X = x[0] - (x[1] * quociente);
        Y = y[0] - (y[1] * quociente);

        x[0] = x[1];
        x[1] = X;
        y[0] = y[1];
        y[1] = Y;
    }

    *alpha = x[1];
}

int main(){
    long long int n,d,e,m,t,c,i,j,p,qd;

    scanf("%lli %lli %lli",&n,&e,&c);

    for (p=3;p<n;p++){
        for (qd=0,j=2;j*j<=p && p%2;j++) if (p%j==0) qd++;
        if (!qd && !(n%p)) break;
    }

    t=(p-1)*((n/p)-1);

    mdc(e,t,&d);

    d=(d+t)%t;

    m=exp(c,d,n);

    printf("%lli\n",m);

    return 0;
}

