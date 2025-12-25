#include<stdio.h>
#define MAX (1<<10)
#define MOD 1000000007 

unsigned long long n,p,q,ans;
char c;

int main(){
    while (scanf("%llu %llu %c %llu",&n,&p,&c,&q)!=EOF){
        printf("%s\n",(c=='+' ? p+q : p*q) > n ? "OVERFLOW" : "OK");
    }
    return 0;
}