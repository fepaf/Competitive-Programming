#include<bits/stdc++.h>
#define _ ios_base:sync_with_stdio(0);
#define MAXN 100123

using namespace std;

/*
problema: máximo lucro dado o valor de ações em N dias consecutivos e só podendo ter uma ação por vez
n <= 10**5
*/

int n, p[MAXN], memo[MAXN][2];

int f(int idx, int qtd){
    if (idx == n) return 0;

    if (~memo[idx][qtd]) return memo[idx][qtd];

    if (qtd){
        return memo[idx][qtd] = max(f(idx+1,qtd) , f(idx+1,qtd-1) + p[idx]);
    }
    else {
        return memo[idx][qtd] = max(f(idx+1,qtd) , f(idx+1,qtd+1) - p[idx]);
    }

}

int main(){_
    cin >> n;
    for (int i = 0; i<n; i++){
        cin >> p[i];
    }

    for (int i=0; i<n; ++i){
        memo[i] = -1;
    }

    cout << f(0,0) << endl;
    return 0;
}
