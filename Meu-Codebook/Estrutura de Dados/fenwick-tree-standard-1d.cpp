#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define i64 long long
#define vi vector<i64>
#define lsb(x)  (x)&(-(x))
#define W(x) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;

using namespace std;

/*
fenwick tree - BIT (binary index tree)

Recebe um array A, de tamanho N, e realiza Q operações sobre ele

as operações são de dois tipos:

ft_query(idx): soma cumulada de A[1..IDX]
ft_update(idx, val): soma VAL em A[IDX]
ft_lower_bound(val): índice do primeiro valor X >= VAL
*/

vi ft;
int n;

void ft_update(int idx, i64 val){
    for (; idx <= n; idx += lsb(idx)){
        ft[idx] += val;
    }
}

i64 ft_query(int idx){
    i64 ans = 0LL;
    for (; idx >= 1; idx -= lsb(idx)){
        ans += ft[idx];
    }
    return ans;
}

i64 ft_lower_bound(i64 val){ 
    W(val);
    i64 idx = 0LL;
    for (i64 i=25; i>=0; --i){
        i64 jump = (1LL<<i);
        if ((idx + jump <= n) && (ft[idx + jump] < val)){
            idx += jump;
            val -= ft[idx];
        }
    }
    return (idx + 1);
}

vi a;
int v, i, q;
string cmd;

int main(){_
    while (cin >> n){
        ft = vi(n+1,0);
        a = vi(n+1);

        for (i=1; i<=n; ++i){
            cin >> a[i];
            ft_update(i, a[i]);
        }

        cin >> q;
        while (q--){
            cin >> cmd;
            if (cmd == "u"){
                cin >> i >> v;
                ft_update(i, v);
                a[i] += v;
            }
            else if (cmd == "q"){
                cin >> i;
                cout << ft_query(i) << endl;
            }
            else if (cmd == "l"){
                cin >> v;
                cout << ft_lower_bound(v) << endl;
            }

            for (int i=1; i<=n; ++i){
                cout << ft_query(i) << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
