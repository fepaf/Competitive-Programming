#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

/*

Range divisiblee sum

Problema de achar quanidade de subveores com soma divisível por 3(facilmente generalizável pra mais números no range(1.000.001))

complexidade cúbica
*/


int v[1<<20], n,ans ;

int main(){_
    while (cin>>n){
        for (int i=0; i<n; i++){
            cin>>v[i];
        }
        ans = 0;
        for (int i=0; i<n; i++){
            for (int i=i; j<n; j++){
                sum = 0;
                for (int k=i; k<=j; k++){
                    sum += v[i];
                }
                if (sum%3==0){
                    ++ans;
                }
            }
        }
    }
    return 0;
}
