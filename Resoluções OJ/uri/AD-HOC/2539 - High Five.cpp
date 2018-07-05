// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: High Five
// Nível: 3
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2539

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define i64 long long
#define vi vector<i64>
#define MAX 100123
#define lsb(x) (x)&(-(x))

using namespace std;

int n;
vi ft;

i64 query(int idx){
    i64 ans = 0;
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

vi pos;
i64 ans;
int a;

int main(){_
    while (cin >> n){
        ft = vi(n+1,0); pos = vi(n+1);

        for (int i=n; i>=1; --i){
            cin >> a;
            pos[a] = i;
            update(i, 1);
        }

        ans = 0LL;
        for (int i=1; i<=n; ++i){
            ans += query(pos[i]-1);
            update(pos[i], -1);
        }
        
        cout << ans << endl;
    }
    return 0;
}

