// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Precisa-se de Matemáticos...
// Nível: 3
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1804

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAX 100123
#define lsb(x) (x)&(-(x))

using namespace std;

int ft[MAX];//vem tudo incializado com zero
int n, a[MAX];

int query(int idx){
    int ans = 0;
    while (idx >= 1){
        ans += ft[idx];
        idx -= lsb(idx);
    }
    return ans;
}

void update(int idx, int val){
    while (idx <= n){
        ft[idx] += val;
        idx += lsb(idx);
    }
}

int i;
char cmd;

int main(){_
    cin >> n;

    for (i=1; i<=n; ++i){
        cin >> a[i];
        update(i, a[i]);
    }

    while (cin >> cmd >> i){
        if (cmd == 'a'){
            update(i, -a[i]);
            a[i] = 0;
        }
        else {
            cout << query(i-1) << endl;
        }
    }

    return 0;
}
/*
observe que nao reinicializo os vetores por ser um caso de teste por arquivo
*/

