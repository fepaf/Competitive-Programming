#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define i64 long long
#define MAX (1<<20)
#define vi vector<i64>
#define eb emplace_back
#define pb push_back
#define sz(x) (int)(x).size()
#define lsb(x) (x)&(-(x))

using namespace std;

vi ft;

i64 update(int idx, i64 val){//soma VAL na posiçãi IDX do array A
    while (idx<=n){
        ft[idx] += val;
        idx += lsb(idx)
    }
}

i64 query(int idx){//
    i64 ans = 0LL;
    while (idx>=0){
        ans += ft[idx];
        idx -= lsb(idx);
    }
    return ans;
}

int msb_cnt(i64 val){
    int ans = 0;
    while (val){
        val >>= 1;
        ++ans;
    }
    return ans;
}

int bound(i64 x){
    i64 res = 0LL;
    int tam = msb_cnt(n)-1;
    for (int k = tam; k>=0 ; --k){
        i64 p = res + (1LL<<k) - 1;
        if (p < n && ft[p] <= x){
            x -= ft[p];
            res += (1LL<<k);
        }
    }
    return res;
}

void showFT(){
    cout << "----" << endl;
    for (int i=1; i<=n; ++i){
        cout << query(i)-query(i-1) << " ";
    }
    cout << "----" << endl;
}

vi a;
i64 n, v, i;

int main(){_
    while (cin >> n){
        ft = vi(n+1,0) , a = vi(n+1);
        for (int i=1; i<=n; ++i){
            cin >> a[i];
            update(i+1,a[i]);
        }
        while ((cin >> cmd) && cmd){
            if (cmd == 1){
                cin >> i >> v;
                update(i, v);
                showFT();
            }
            else if (cmd == 2){
                cin >> i;
                cout << query(i) << endl;
                showFT();
            }
            else if (cmd == 3){
                cin >> v;
                cout << bound(v) << endl;
                showFT();
            }
        }
    }
    return 0;
}
