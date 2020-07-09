olá#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAXN 100123
#define left(u) (2*u)
#define right(u) (2*u+1)
#define mid(i,j) ((i+j)/2)
#define FLAG -1

using namespace std;

/*
status: WA
Problema: receber um array A[1..N]
e realiza Q operações que podem ser de dois tipos

query L R : retorna o indice do menor de A[L..R]
update I V : atuliza o valor de A[I] aka A[I] += V

Q <= 10**5
N <= 10**5

*/

//------------------------------------------------------------------------------
int a[MAXN], i , v, l, r, n, q;
string op;

//------------------------------------------------------------------------------
int tree[4*MAXN];

int operacao(int esq, int dir){
    return a[tree[esq]] < a[tree[dir]] ? tree[esq] : tree[dir];
}

void build(int u, int i, int j){

    if (i == j){
        tree[u] = i;
        return;
    }

    build(left(u), i, mid(i,j));
    build(right(u), mid(i,j)+1, j);

    tree[u] = operacao(left(u), right(u));
}

void update(int u, int i, int j, int idx, int val){

    if (i == j){
        tree[u] = i;
        return;
    }

    if (i<=idx && idx<=mid(i,j)){
        update(left(u), i, mid(i,j), idx, val); // esquerda
    }
    if (mid(i,j)+1<=idx && idx<=j){
        update(right(u), mid(i,j)+1, j, idx, val); // direita
    }

    tree[u] = operacao(left(u), right(u));
}

int query(int u, int i, int j, int l, int r){

    if (l<=i && j<=r){
        return tree[u];
    }

    if (j<l || i>r){
        return FLAG;
    }

    int ans_esq = query(left(u), i, mid(i,j), l, r);
    int ans_dir = query(right(u), mid(i,j)+1, j, l, r);

    if (ans_dir == FLAG) return ans_esq;
    if (ans_esq == FLAG) return ans_dir;

    return operacao(ans_esq, ans_dir); //
}



//------------------------------------------------------------------------------

signed main(){_
    while (cin >> n){
        for (int i=1; i<=n; ++i){
            cin >> a[i];
        }
        build(1,1,n); //supralinear

        for (cin >> q; q--;){
            cin >> op;
            if (op == "update"){
                cin >> i >> v;
                a[i] += v;
                update(1, 1, n, i, v);
            }
            else if (op == "query") {
                cin >> l >> r;
                cout << query(1, 1, n, l, r) << endl;
            }

        }
    }

    return 0;
}
