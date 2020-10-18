#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MOD 1000000007
#define MAX (1<<20)
#define MAXN (1<<10)
#define MAXC (1<<10)
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

using namespace std;

int ft[MAX], n;

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

int a[MAX], m, ans;
int dp[MAX]; // dp[i] é o tamnho do lis que termina no indice i
int copia[MAX];
map<int, int> cod;

int main(){_
    cin >> m;
    
    n = 0;
    for (int i=1; i<=m; ++i){
        cin >> a[i];
        copia[i] = a[i];
        n = max(a[i], n);
    }

    sort(copia, copia+m);

    for (int i=1; i<=m; ++i){
        cod[copia[i]] = i;
    }

    for (int i=1; i<=m; ++i){
        dp[i] = 1+query(cod[a[i]]); // query(x) ele guarda o lis que tem x como maior valor ate quele momento
        update(cod[a[i]], dp[i]);
        ans = max(ans, dp[i]);
    }  

    cout << ans << endl;
    return 0;
}
