// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: É Na Batida do Cavalo!
// Nível: 4
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2488

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<17)
#define i64 long long
#define all(x) (x).begin() , (x).end()
#define sz(x) (int)(x).size()
#define ii pair<int, int>
#define fs first
#define sc second
#define eb emplace_back
#define vi vector<int>
#define vvi vector<vi>
#define vii vector<ii>
#define vvii vector<vii>
#define lsb(x) ((x) & (-x))
#define gcd(x,y) __gcd((x),(y))
#define left(x) (x<<1)
#define right(x) ((x<<1)|1)

using namespace std;

int n, m;
char op;

int t[3][4*MAX], lazy[3][4*MAX];

void push(int c, int u, int l, int r){
    if (lazy[c][u]){
        
    }

}

void build(int u, int tl, int tr){
    if (tl == tr){
        t[0][u] = 1;
        t[1][u] = t[2][u] = 0;
    }
    else {
        int tm = ((tl+tr)>>1);
        build(left(u), tl, tm);
        build(right(u), tm+1, tr);
        t[0][u] = t[0][left(u)] + t[0][right(u)];
        t[1][u] = t[1][left(u)] + t[1][right(u)];
        t[2][u] = t[2][left(u)] + t[2][right(u)];
    }
}

void change(int u, int tl, int tr, int l, int r){
    if (tr < l || r < tl) return;
    if (l <= tl && tr <= r){
        int aux = t[0][u];
        t[0][u] = t[2][u];
        t[2][u] = t[1][u];
        t[1][u] = aux;
    }
    else {
        int tm = ((tl+tr)>>1);
        change(left(u), tl, tm, l, r);
        change(right(u), tm+1, tr, l, r);
        t[0][u] = t[0][left(u)] + t[0][right(u)];
        t[1][u] = t[1][left(u)] + t[1][right(u)];
        t[2][u] = t[2][left(u)] + t[2][right(u)];
    }
}

int get_count(int c, int u, int tl, int tr, int l, int r){
    if (tr < l || r < tl) return 0;
    
    if (l <= tl && tr <= r) return t[c][u];

    int tm = ((tl+tr)>>1);
    return get_count(c, left(u), tl, tm, l, r) + get_count(c, right(u), tm+1, tr, l, r);
}

int l, r;

int main(){_
    while (cin >> n >> m){
        build(1, 1, n);
        while (m--){
            cin >> op >> l >> r;
            if (op == 'C'){
                cout << get_count(0, 1, 1, n, l, r) << ' ';
                cout << get_count(1, 1, 1, n, l, r) << ' ';
                cout << get_count(2, 1, 1, n, l, r) << endl;
            }
            else {
                change(1, 1, n, l, r);
            }
        }
        cout << endl;
    }
	return 0;
}
