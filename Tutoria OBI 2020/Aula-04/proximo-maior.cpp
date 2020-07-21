#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ii pair<int, int>
#define fs first
#define sc second
#define vi vector<int>
#define vii vector<ii>
#define eb emplace_back
#define pb push_back

using namespace std;

int n, k;
vi a, ngr;
stack<int> p;
/*
Encontra para cada número do vetor qual o número mais próximo à direita que é maior que ele
Complexidade Amortizada: o(n)
*/
int main(){_
    cin >> n;
    a = vi(n);
    ngr = vi(n+1);
    for (int i=0; i<n; ++i){
        cin >> a[i];
    }
    a.eb(INT_MAX);
    for (int i=0; i<=n; ++i){
        while (!p.empty() && a[p.top()] < a[i]){
            ngr[p.top()] = i;
            p.pop(); 
        }
        p.push(i);
    }

    for (int i=0; i<n; ++i){
        cout << (ngr[i] == n ? -1 : a[ngr[i]]) << " ";
    }
    cout << endl;

    return 0;
}
