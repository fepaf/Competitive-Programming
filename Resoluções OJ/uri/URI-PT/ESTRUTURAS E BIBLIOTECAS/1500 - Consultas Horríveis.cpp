// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Consultas Horríveis
// Nível: 7
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1500

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAXN 100100
#define OUT 0// possível erro

using namespace std;

typedef long long ll;

ll tree[4*MAXN], lazy[4*MAXN], a[MAXN];

int mid(int x, int y){return ((x + y) >> 1);}
int left(int x){return (x << 1);}
int right(int x){return (x << 1) + 1;}

ll operacao(ll a, ll b){
    return (a + b);
}

int build(int u, int i, int j){
    // se é nó folha então guarda o elemento
    if (i == j){
        lazy[u] = 0;
        return tree[u] = a[i];
    }
    //contrói os filhos da direita e da esquerda antes
    build(left(u), i, mid(i, j));
    build(right(u), mid(i, j)+1, j);
    //usa o resultado dos filhos pra se contruir
    return tree[u] = operacao(tree[left(u)], tree[right(u)]);
}

ll query_range(int u, int i, int j, int l, int r){
    //se intervalo do nó está fora do intervalo buscado então não segue busca
    if (r < i || j < l) return OUT;
    //se tem atulizacoes pendentes então a faz antes de processar
    if (lazy[u]){
        tree[u] += (j - i + 1) * lazy[u];

        if (i != j){
            lazy[left(u)] += lazy[u];
            lazy[right(u)] += lazy[u];
        }

        lazy[u] = 0;
    }
    //se o intervalo do nó está dentro do buscado então pega-se o resultado
    if (l <= i && j <= r) return tree[u];

    ll lans = query_range(left(u), i, mid(i, j), l, r);
    ll rans = query_range(right(u), mid(i, j)+1, j, l, r);

    return operacao(lans, rans);
}

int update_range(int u, int i, int j, int l, int r, ll val){
    if (lazy[u]){
        tree[u] += (j - i + 1) * lazy[u];

        if (i != j){
            lazy[left(u)] += lazy[u];
            lazy[right(u)] += lazy[u];
        }

        lazy[u] = 0;
    }

    if (r < i || j < l) return OUT;

    if (l <= i && j <= r){

        tree[u] += (j - i + 1) * val;

        if (i != j){
            lazy[left(u)] += val;
            lazy[right(u)] += val;
        }

        return tree[u];
    }

    update_range(left(u), i, mid(i, j), l, r, val);
    update_range(right(u), mid(i, j)+1, j, l, r, val);

    return tree[u] = operacao(tree[left(u)], tree[right(u)]);
}

int n, c, l, r, o, t;
ll v, ans;

int main(){_
    cin >> t;
    while (t--){
        cin >> n >> c;
        for (int i = 0; i < n; i++){
            a[i] = tree[i] = lazy[i] = 0;
        }
        for (int i = n; i <= 4*n; i++){
            a[i] = tree[i] = lazy[i] = 0;
        }
        build(1, 0, n-1);
        while (c--){
            cin >> o >> l >> r;
            if (o == 1){
                ans = query_range(1, 0, n-1, l-1, r-1);
                cout << ans << endl;
            }
            else {
                cin >> v;
                update_range(1, 0, n-1, l-1, r-1, v);
            }
        }
    
    }
    return 0;
}

