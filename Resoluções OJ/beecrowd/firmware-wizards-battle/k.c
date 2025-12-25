#include<stdio.h>
#define MAX (1<<10)
#define MOD 1000000007 

unsigned long long n, ai, psa[MAX], ans;

int main(){
    while (scanf("%llu", &n)!=EOF){
        ans = 0ULL;
        for (int i=1; i<=n; ++i){
            scanf("%llu",&ai);
            psa[i] = ai^psa[i-1];
        }
        for (int i=1; i<=n; ++i){
            for (int j=i; j<=n; ++j){
                ans = (ans + (psa[j]^psa[i-1])%MOD)%MOD;
            }
        }
        printf("%llu\n",ans);
    }
    return 0;
}