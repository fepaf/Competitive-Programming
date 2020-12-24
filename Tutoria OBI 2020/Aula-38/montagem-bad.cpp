#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAXN 15
#define INF 0x3f3f3f3f
#define vi vector<int>
#define eb emplace_back

using namespace std;

//obs: usar 0-indexado

int n, m; 
int c[MAXN][MAXN];
int u, v, w;
vi vis;
int memo[MAXN][1<<MAXN];

//f(i, usd) =  melhor resposta para preencher a partir posição i, considerando 
// usado os jogadores na mask USD;

int f(int i, int usd){

    if (usd == ((1<<n)-1)){
        return 0;
    }

    if (~memo[i][usd]) return memo[i][usd];

    int ans = INF;
    for (int j=0; j<n; ++j){
        if (!(usd & (1<<j))){
            ans = min(ans, f(i+1, usd | (1<<j)) + c[i][j]);
        }
    }

    return memo[i][usd] = ans;
}


int main(){_

    while ((cin >> n) && n){
        for (int i=0; i<n; ++i){
            for (int j=0; j<n; ++j){
                cin >> c[i][j];
            }
        }

        memset(memo, -1, sizeof(memo));
        
        cout << f(0, 0) << endl;
    }

}