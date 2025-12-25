#include<stdio.h>
#define max(a,b) ((a) > (b) ? (a) : (b))

int n, l, q2,q3,q4,q5;

int main(){
    scanf("%d", &n);
    for (int i=n; i--;){
        scanf("%d",&l);
        q2 += !(l%2);
        q3 += !(l%3);
        q4 += !(l%4);
        q5 += !(l%5);
    }
    printf("%d Multiplo(s) de 2\n",q2);
    printf("%d Multiplo(s) de 3\n",q3);
    printf("%d Multiplo(s) de 4\n",q4);
    printf("%d Multiplo(s) de 5\n",q5);
    return 0;
}