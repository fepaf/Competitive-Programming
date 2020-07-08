// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Promoção
// Nível: 6
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1624

#include<bits/stdc++.h>
#define MAXN 110 //Quantidade máxima de objetos
#define MAXM 3010 //Maior capacidade máxima de uma mochila
#define UNCALCULATED -1
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int n;// quantidade de objetos
int m;// capacidade máxima da mochila
int p[MAXN];// p[i] é peso do I-ésimo objeto
int v[MAXN];// v[i] é o valor do I-ésimo objeto
int memo[MAXN][MAXM];// tabela de memoization para a dp

int f(int idx, int cap){
    if (idx == 0) return 0;
    if (cap == 0) return 0;
    if (memo[idx][cap] != UNCALCULATED) return memo[idx][cap];

    int ans;
    if (p[idx]<=cap){
        ans = max(v[idx] + f(idx-1, cap-p[idx]), f(idx-1, cap));
    }
    else{
        ans = f(idx-1, cap);
    }

    return memo[idx][cap] = ans;
}

int main(){_
    while (cin>>n && n){
        memset(memo, UNCALCULATED, sizeof(memo));
        for (int i=1; i<=n; i++){
            cin>>v[i]>>p[i];
        }
        cin>>m;
        cout<<f(n,m)<<endl;
    }

    return 0;
}

