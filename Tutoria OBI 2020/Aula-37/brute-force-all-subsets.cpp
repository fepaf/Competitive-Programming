#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int a[16], n, x;
int ans, soma;
/*
Problema: Quantos subconjuncontos distintos tem soma X?
Complexidade: O((2**n)*n)
*/

int main(){_
    cin >> n >> x;
    for (int i=0; i<n; ++i){
        cin >> a[i];
    }

    for (int mask=0; mask < (1<<n); ++mask){
        soma = 0;
        for (int j=0; j<n; ++j){
            if ((1<<j)&mask){
                soma += a[j];
            }
        }
        ans += (soma==x);
    }

    cout << ans << endl;
    return 0;
}