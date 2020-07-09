#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define i64 long long

using namespace std;

/*

Range divisiblee sum

Problema de achar quanidade de subveores com soma divisível por 3(facilmente generalizável pra mais números no range(1.000.001))

complexidade linear
*/

i64 v[1<<20], sum[1<<20], f[1<<20], n, ans;

int main(){_
    while (cin>>n){
        sum[0] = 0; f[0] = 1;
        for (int i=1; i<=n; i++){
            cin>>v[i];
            sum[i] = (sum[i-1] + v[i])%3;
            ans += f[sum[i]];
            f[sum[i]]++;
        }
        cout<<ans<<endl;
    }
    return 0;
}


/*
int main(){_
    while (cin>>n){
        sum[0] = 0; f[0] = 1;
        for (int i=1; i<=n; i++){
            cin>>v[i];
            sum[i] = (sum[i-1] + v[i])%3;
            f[sum[i]]++;
        }
        for (int i=0; i<3; i++){
            ans += (f[i]*(f[i]-1))/2;
        }
        cout<<ans<<endl;
    }
    return 0;
}
*/

/*
int sum, f[3], v;
int main(){_
    while (cin>>n){
        sum = 0; f[0] = 1;
        for (int i=1; i<=n; i++){
            cin>>v;
            sum = (sum + v)%3;
            f[sum]++;
        }s
        for (int i=0; i<3; i++){
            ans += (f[i]*(f[i]-1))/2;
        }
        cout<<ans<<endl;
    }
    return 0;
}
*/
