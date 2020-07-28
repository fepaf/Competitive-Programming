#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAX (1<<20)
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

int a[MAX], psa[MAX], n, l, r, sum, q;
/*
Imprime a soma de todos os elementos do subvetor A[L..R]
*/
int main(){_
    while (cin >> n){
        psa[0] = 0;
        for (int i=1; i<=n; ++i){
            cin >> a[i];
            psa[i] = psa[i-1] + a[i];
        }
        cin >> q;
        while (q--){
            cin >> l >> r;
            // int sum = 0;
            // for (int i=l; i<=r; ++i){
            //     sum += a[i];
            // }
            sum = psa[r] - psa[l-1];
            cout << sum << endl;
        }
    }
    return 0;        
}