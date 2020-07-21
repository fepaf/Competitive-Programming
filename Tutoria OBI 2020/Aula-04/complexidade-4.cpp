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

/*
Exemplo de otimização de complexidade
Problema: soma dos números de 1 a N
*/
int n, m, ans;

int main(){_
    cin >> n;
    for (int i=1; i<=n; ++i){
        m = 0;
        for (int j=1; j<=i; ++j){
            ++m;
        }
        ans += m;
    }
    cout << ans << endl;
    return 0;
}

/*
o(n*(n+1)/2) -> o(n**2)
*/
