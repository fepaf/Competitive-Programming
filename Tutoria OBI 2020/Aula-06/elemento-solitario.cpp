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

int ans, x, n;
/*
Deveriam ter todos os numeros de 1 a N
porém é fornecido uma sequencia com um deles faltando
quem é?
*/
int main(){_
    while (cin >> n){
        ans = 0;
        for (int i=1; i<=n; ++i){
            ans ^= i;
        }
        for (int i=0; i<n-1; ++i){
            cin >> x;
            ans ^= x;
        }
        cout << ans << endl;
    }
    return 0;        
}