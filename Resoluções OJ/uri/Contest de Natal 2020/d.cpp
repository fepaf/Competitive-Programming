#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAX (1<<20)
#define i64 long long

using namespace std;

int t, n, k, caso;
i64 c[51][51];
long double x, y, ans;

int main(){_
    scanf("%d",&t);
    for (int i=0; i<=50; ++i){
        c[i][0] = c[i][i] = 1LL;
        for (int j=1; j<=i; ++j){
            c[i][j] = c[i-1][j-1]+c[i-1][j];
        }
    }
    
    while (t--){
        scanf("%d %d %Lf",&n, &k, &x);
        x /= 100.0;
        y=1.0-x;
        ans = 1.0;
        for (int i=k; i--;){
            ans *= x;
        }
        for (int i=n-k; i--;){
            ans *= y;
        }
        ans *= c[n][k];
        ans *= 100;
        printf("A chance de Basy acertar o numero no dia %d eh %.2Lf%%\n",++caso,ans);
    }
    return 0;
}