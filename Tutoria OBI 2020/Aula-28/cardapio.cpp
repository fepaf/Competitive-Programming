#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define i64 long long
#define MAX (1<<20)
#define sz(x) ((int)(x).size())
#define lsb(x) (x & -x)

using namespace std;

/*
Problema: https://www.urionlinejudge.com.br/judge/pt/problems/view/2526
*/

int ft[MAX], n;

void update(int idx, int val){
    while (idx <= n){
        ft[idx] += val;
        idx += lsb(idx);
    }
}

int query(int idx){
    int ans = 0;
    while (idx >= 1){
        ans += ft[idx];
        idx -= lsb(idx);
    }
    return ans;
}

int m;
int a[MAX];
int men_e[MAX], men_d[MAX];

int main(){_
    while (cin >> m){

        n = 0;
        for (int i=1; i<=m; ++i){
            cin >> a[i];
            n = max(a[i], n);
            ft[i] = 0;
        }

        for (int i=1; i<=m; ++i){
            men_e[i] = query(a[i]);
            update(a[i]+1, 1);
        }

        for (int i=1; i<=n; ++i){
            ft[i] = 0;
        }

        for (int i=m; i>=1; --i){
            men_d[i] = query(a[i]);
            update(a[i]+1, 1);
        }

        i64 ans = 0;
        for (int j=2; j<=m-1; j++){
            ans += ((j-1-men_e[j])*(men_d[j]*1LL));
        }

        cout << ans << endl;
    }

    return 0;
}
