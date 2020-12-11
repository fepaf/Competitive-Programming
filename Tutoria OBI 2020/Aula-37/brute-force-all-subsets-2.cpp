#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int a[16], n, x;
int ans, prod, qtd;
/*
Problema: Quantos subconjuncontos distintos tem produto X e quantidade impar de 
           elementos?
Complexidade: O((2**n)*n)
*/

int main(){_
    cin >> n >> x;
    for (int i=0; i<n; ++i){
        cin >> a[i];
    }

    for (int mask=0; mask < (1<<n); ++mask){
        prod = 1;
        qtd = 0;
        for (int j=0; j<n; ++j){
            if ((1<<j)&mask){
                prod *= a[j];
                ++qtd;
            }
        }
        ans += (prod==x && (qtd&1));
    }

    cout << ans << endl;
    return 0;
}