#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<20)
#define i64 long long
#define MOD (1000000007)
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

using namespace std;

/*
Problema: https://neps.academy/problem/300
*/

int n, ft[MAX];

void update(int idx, int val){
    while (idx<=n){
        ft[idx] = max(val, ft[idx]);
        idx += lsb(idx);
    }
}

int query(int idx){
    int ans = 0;
    while(idx>=1){
        ans = max(ans, ft[idx]);
        idx -= lsb(idx);
    }
    return ans;
}


int m, a[MAX];
set<int> val;
map<int, int> cod;
int matricula;
int lis_e[MAX], lis_d[MAX];

int main(){_
    cin >> m;
    for (int i=1; i<=m; ++i){
        cin >> a[i];
        val.insert(a[i]);
    }

    matricula = 1;
    for (int x : val){
        cod[x] = matricula;
        matricula++;
    }

    n = sz(val);

    for (int i=1; i<=m; i++){
        lis_e[i] = 1 + query(cod[a[i]]-1); // tamanho da maior sequência que TERMINA no indice i vindo pela esquerda
        update(cod[a[i]], lis_e[i]);
    }

    for (int i=1; i<=n; ++i){
        ft[i] = 0;
    }

    for (int i=m; i>=1; i--){
        lis_d[i] = 1 + query(cod[a[i]]-1); // tamanho da maior sequência que TERMINA no indice i vindo pela direita
        update(cod[a[i]], lis_d[i]);
    }

    // for (int i=1; i<=m; i++){
    //     cout << lis_e[i] << ' ';
    // }
    // cout << endl;
    // for (int i=1; i<=m; i++){
    //     cout << lis_d[i] << ' ';
    // }
    // cout << endl;
    
    int ans = 0;
    for (int i=1; i<=m; i++){
        ans = max(ans, min(lis_e[i], lis_d[i]));
    }
    ans = 2*ans-1;
    cout << ans << endl;
    

    return 0;
}

