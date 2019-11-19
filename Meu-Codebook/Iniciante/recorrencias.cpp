#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define i64 long long
#define MOD 1000000009
#define MAX 3

using namespace std;


/*
Problema: calcular o N-ésimo termo da sequência de Tribonacci

A sequência de Tribonacci é definida por

F(N) = F(N-1) + F(N-2) + F(N-3)
F(3) = 2
F(2) = 1
F(1) = 0
*/

//É necessário encapsular a mtriz aqui para facilitar operações como atribuições e retornos de matrizes
struct matrix{
    i64 m[MAX][MAX];
};

matrix mult(matrix a, matrix b, int m){
    matrix ans;
    for (int i=0; i<MAX; ++i){
        for (int j=0; j<MAX; ++j){
            ans.m[i][j] = 0LL;
            for (int k=0; k<MAX; ++k){
                ans.m[i][j] += (a.m[i][k]*b.m[k][j]);
            }
            ans.m[i][j] = (ans.m[i][j]+m)%m; // se o M for aproximadamente 1 bilhão é preferível fazer a modulação aqui pra evitar TLE
        }
    }

    return ans;
}

matrix fexpo(matrix b, i64 e, int m){
    matrix ans;

    //inicializar ANS como matriz identidade
    for (int i=0; i<MAX; ++i){
        for (int j=0; j<MAX; ++j){
            ans.m[i][j] = (i==j ? 1 : 0);
        }
    }

    //Algoritmo da exponenciação rápida mas adaptado para matriz
    while (e){
        if (e & 1) ans = mult(ans, b, m);
        b = mult(b, b, m);
        e >>= 1;
    }

    return ans;
}

matrix t; // matriz de tranformação
matrix pre; // matriz de pré-termos. Só é usada a primeira coluna dela.
matrix ans; //matriz de resposta. Só é usadad a primeira coluna dela.
int n;

int main(){_
    pre = {{{1,0,0},{0,0,0},{-1,0,0}}}; //cuidado com a sintaxe de inicialização de matriz e de struct
    while ((cin >> n) && n){
        t = {{{1,1,1},{1,0,0},{0,1,0}}};
        t = fexpo(t, n, MOD);
        ans = mult(t, pre, MOD);
        cout << ans.m[0][0] << endl;
    }
    return 0;
}
