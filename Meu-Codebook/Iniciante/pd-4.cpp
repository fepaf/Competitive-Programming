#include<bits/stdc++.h>
#define _ ios_base:sync_with_stdio(0);
#define MAXN 100123
#define MOD 1000000007
#define i64 long long

using namespace std;

/*
problema: quantas formas pode-se cobrir uma ripa de tamanho N com M tipos de ripas pequenas
n <= 10**3
m <= 10**3
*/

int n,a[MAXN];
i64 memo[MAXN];

i64 f(int n){

    if (n <= 0) return 1;

    i64 ans = 0LL;

    for (int i=0; i<m; i++){
        ans = (ans + f(n-a[i]))%MOD;
    }

    return ans;

}

int main(){_
    cin >> n >> m;
    for (int i = 0; i<m; i++){
        cin >> a[i];
    }

    for (int i=0; i<n; ++i){
        memo[i] = -1;
    }

    cout << f(n) << endl;
    return 0;
}
