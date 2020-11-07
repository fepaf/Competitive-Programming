#include<bits/stdc++.h>
#define MAX (1<<20)
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define esq(x) (2*(x))
#define dir(x) (2*(x)+1)
#define OUT 0x3f3f3f3f

using namespace std;

/*
query(l,r) : INDICE DO minimo do intevalo A[L..R]
update(idx, val):  faz A[idx] = VAl
*/

int a[MAX]; // array original
int tmin[MAX];

int n; //tamanho de A[]

int comb(int x, int y){
    return (a[x] > a[y] ? x : y); //obs: cuidado com < ou <=, depende do problema
 }

void build(int u, int i, int j){// u é o indice do nó n árvore, e armzzena o segmento A[i..j]

    if (i==j){
        tmin[u] = i; // atenção, diferente do sum
        return;
    }

    int md = (i+j)/2;

    build(esq(u), i, md); // controi sub arvore esquerda
    build(dir(u), md+1, j); // controi sub arvore direita
    tmin[u] = comb(tmin[esq(u)], tmin[dir(u)]);
}

void update(int u, int i, int j, int idx, int val){

    if (i==j){
        a[idx] = val;
        return;
    }

    int md = (i+j)/2;

    if (i<=idx && idx<=md) update(esq(u), i, md, idx, val);
    if (md<idx && idx<=j) update(dir(u), md+1, j, idx, val);

    tmin[u] = comb(tmin[esq(u)], tmin[dir(u)]);
}

int query(int u, int i, int j, int l, int r){
    if (l<=i && j<=r){
        return tmin[u]; // [i..i] está completamente dentro de [l..r]
    }
    if (j<l || r<i){
        return OUT; // [i..i] está completamente fora de [l..r]
    }

    // Caso de escape, default, 'overlap' -> desce na árvore
    int md = (i+j)/2;

    int ans_esq = query(esq(u), i, md, l, r);
    int ans_dir = query(dir(u), md+1, j, l, r);

    if (ans_esq == OUT) return ans_dir; 
    if (ans_dir == OUT) return ans_esq; 

    return tmin[u] = comb(ans_esq, ans_dir); 
}

int l, r, idx, val, op;

int main(){_
    cin >> n;

    for (int i=1; i<=n; ++i){
        cin >> a[i];
    }

    build(1, 1, n);

    while (cin >> op){
        if (op == 1){
            cin >> idx >> val;
            update(1, 1, n, idx, val);

            cout << "Atualizou" << endl;
        }
        if (op == 2){
            cin >> l >> r;
            cout << "indice: " << query(1, 1, n, l, r) << endl;
            cout << "menor: " << a[query(1, 1, n, l, r)] << endl;
        }
    }

    return 0;
}