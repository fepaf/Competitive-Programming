#include<stdio.h>
#define MOD 1000000007
int i,t;
long long n;

int main(){
    for (i=1, scanf("%i",&t); i<=t; i++){
        scanf("%lli",&n);

        printf("Case %i: %lli\n",i,(((n*(n-1))%MOD)*500000004)%MOD + (((((((n*(n-1))%MOD)*(n-2))%MOD)*(n-3))%MOD)*41666667)%MOD +1);
    }
}
