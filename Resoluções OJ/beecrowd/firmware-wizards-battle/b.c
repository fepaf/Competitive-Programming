#include<stdio.h>
#define max(a,b) ((a) > (b) ? (a) : (b))

int m,a,b,c;

int main(){
    scanf("%d %d %d", &m, &a, &b);
    c = m-a-b;
    m = max(a,b);
    m = max(m,c);
    printf("%d\n",m);
    return 0;
}