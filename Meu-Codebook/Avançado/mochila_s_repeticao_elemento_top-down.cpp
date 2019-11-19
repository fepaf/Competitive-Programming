#include<bits/stdc++.h>
#define MAXN 1010 //Quantidade máxima de objetos
#define MAXM 1010 //Maior capacidade máxima de uma mochila
#define UNCALCULATED -1
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int n;// quantidade de objetos
int m;// capacidade máxima da mochila
int p[MAXN];// p[i] é peso do I-ésimo objeto
int v[MAXN];// v[i] é o valor do I-ésimo objeto
int memo[MAXN][MAXM];// tabela de memoization para a dp

void init(int n, int m){//inicializa todos os valores de tabela de memoization MEMO com flag de não calculado UNCALCULATED
    for (int i=0; i<=n; i++){
        for (int j=0; j<=m; j++){
            memo[i][j] = UNCALCULATED;
        }
    }
}

int f(int idx, int cap){// calcula a melhor soluçao para uma mochila de capacidade CAP considerando os IDX primeiros elementos
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
    while (cin>>n>>m){
        init(n,m);
        for (int i=1; i<=n; i++){
            cin>>v[i]>>p[i];
        }
        cout<<f(n,m)<<endl;
    }

    return 0;
}
