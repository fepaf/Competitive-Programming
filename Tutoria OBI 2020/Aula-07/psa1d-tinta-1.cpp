#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAX (1<<20) // aproximdamente 1000,
#define i64 long long
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
/*
dado A[1..N].
vou colocar varias fitas das posições L..R
quero saber a maior quantidade de sobreposição de fitas
ou seja, quero saber a qtd de fitas que tem na posição
do vetor que está coberta por mais fitas
*/

int a[MAX], psa[MAX], l, r, n, m,ans;

int main(){_
    cin >> n >> m;
    while (m--){
        cin >> l >> r;
        a[l] += 1;
        a[r+1] += -1;
    }
    ans = 0;
    for (int i=1; i<=n; ++i){
        psa[i] = a[i] + psa[i-1];
        cout << psa[i] << ' ';
        ans = max(ans, psa[i]);
    }
    cout << endl;
    cout << ans << endl;
    return 0;        
}