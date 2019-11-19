#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

/*

Range divisiblee sum

Problema de achar quanidade de subveores com soma divisível por 3(facilmente generalizável pra mais números no range(1.000.001))

complexidade quadrática
*/


int v[1<<20], sum[1<<20], n, ans;

int main(){_
    while (cin>>n){
        sum[0] = 0;
        for (int i=1; i<=n; i++){
            cin>>v[i];
            sum[i] = sum[i-1] + v[i];
        }
        ans = 0;
        for (int i=1; i<=n; i++){
            for (int j=i; j<=n; j++){
                
                if ((sum[j]-sum[i-1])%3==0){
                    ++ans;s
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
