#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define i64 long long
#define vi vector<i64>
#define lsb(x)  (x)&(-(x))

using namespace std;

/*
fenwick tree - BIT (binary index tree)

Recebe um array A, de tamanho N, e realiza Q operações sobre ele

as operações são de dois tipos:

query(idx): soma cumulada de A[1..IDX]
update(idx, val): soma VAL em A[IDX]
*/

vi ft;
int n;

void update(int idx, i64 val){
    while (idx <= n){
        ft[idx] += val;
        idx += lsb(idx);
    }
}

i64 query(int idx){
    i64 ans = 0LL;
    while (idx >= 1){
        ans += ft[idx];
        idx -= lsb(idx);
    }
    return ans;
}

vi a;
int v, i, q;
string cmd;

int main(){_
    while (cin >> n){
        ft = vi(n+1,0);
        a = vi(n+1);

        for (int i=1; i<=n; ++i){
            cin >> a[i];
            update(i, a[i]);
        }

        cin >> q;
        while (q--){
            cin >> cmd;
            if (cmd == "U"){
                cin >> i >> v;
                update(i, v);
                a[i] += v;
            }
            else if (cmd == "Q"){
                cin >> i;
                cout << query(i) << endl;
            }
        }
    }
    return 0;
}
