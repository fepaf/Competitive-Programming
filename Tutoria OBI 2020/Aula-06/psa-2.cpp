#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAX (1<<20)
#define MOD (int)(1e9 +7)
#define sz(x) (int)(x).size()
#define fs first
#define sc second
#define pb push_back
#define eb emplace_back
#define ii pair<int, int>
#define vi vector<int>
#define vii vector<ii>
#define all(x) (x).begin(), (x).end()


using namespace std;

int a[MAX], psa[MAX], n, l, r, prod, q;
/*
Imprime a multiplicação de todos os elementos do subvetor A[L..R]
n<=1e6
ai <= 1e9
obs: risco claro de overflow. Ver psa-4.cpp para solução mais comum
*/
int main(){_
    while (cin >> n){
        psa[0] = 1;
        for (int i=1; i<=n; ++i){
            cin >> a[i];
            psa[i] = psa[i-1] * a[i];
        }
        cin >> q;
        while (q--){
            cin >> l >> r;
            // int prod = 1;
            // for (int i=l; i<=r; ++i){
            //     prod *= a[i];
            // }
            prod = psa[r] / psa[l-1];
            cout << prod << endl;
        }
    }
    return 0;        
}