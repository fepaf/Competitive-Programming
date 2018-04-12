#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define lsb(x) ((x) & (-x))
#define MOD 1000000007
#define i64 long long

using namespace std;

/*
status: accepted
*/

map<int, int> base;
map<int, int> ind;
int rnk[1 << 20];

void insere(int x, int idx){
    base[0] = 0;
    if (!x) return;
    while (base[lsb(x)]){
        x ^= base[lsb(x)];
    }
    base[lsb(x)] = x;
    ind[lsb(x)] = idx;
}

int existe(int x, int lim){
    base[0] = 0;
    while (base[lsb(x)] && 1 <= ind[lsb(x)] && ind[lsb(x)] <= lim){
        x ^= base[lsb(x)];
    }
    if (x && !base[lsb(x)]) base.erase(lsb(x));
    return (x==0);
}

i64 fexpo(i64 b, int e){
    i64 ans = 1LL;
    for (; e; b = (b*b)%MOD, e >>= 1) if (e&1) ans = (ans*b)%MOD;
    return ans;
}

int n, q, l, x, a;

int main(){_
    while (cin >> n >> q){
        for (int i=1; i<=n; ++i){
            cin >> a;
            insere(a, i);
            rnk[i] = ((int)base.size())-1;
        }
        while (q--){
            cin >> l >> x;
            cout << existe(x, l)*fexpo(2, l-rnk[l]) << endl;
        }
        base.clear(); ind.clear();
    }
    return 0;
}
