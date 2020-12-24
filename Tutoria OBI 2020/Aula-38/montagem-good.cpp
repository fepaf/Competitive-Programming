#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAXN 18
#define INF 0x3f3f3f3f
#define vi vector<int>
#define eb emplace_back

using namespace std;

//obs: usar 0-indexado

int n, m; 
int c[MAXN][MAXN];
int u, v, w;
vi vis;
int memo[1<<MAXN];

//f(i, usd) =  melhor resposta para preencher a partir posição i, considerando 
// usado os jogadores na mask USD;

int f(int usd){

    if (usd == ((1<<n)-1)){
        return 0;
    }

    int i = __builtin_popcount(usd);

    if (~memo[usd]) return memo[usd];

    int ans = INF;
    for (int j=0; j<n; ++j){
        if (!(usd & (1<<j))){
            ans = min(ans, f(usd | (1<<j)) + c[i][j]);
        }
    }

    return memo[usd] = ans;
}


int main(){_

    while ((cin >> n) && n){
        for (int i=0; i<n; ++i){
            for (int j=0; j<n; ++j){
                cin >> c[i][j];
            }
        }

        for (int i=0; i<(1<<n); ++i){
            memo[i] = -1;
        }
        
        cout << f(0) << endl;
    }

}