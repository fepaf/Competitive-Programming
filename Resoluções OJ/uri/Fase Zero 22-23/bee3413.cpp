#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#ifdef ONLINE_JUDGE
#define endl '\n'
#endif
#define INF 0x3f3f3f3f
#define MAX (1<<10)
#define TAM 3
#define OUT MAX
#define MOD 1000000009
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
#define esq(x) (x<<1)
#define dir(x) ((x<<1)|1)
#define W(x) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;

using namespace std;


struct matrix {
    i64 m[TAM][TAM];
};

matrix mult(matrix a, matrix b){
    matrix ans;
    for (int i=0; i<TAM; i++){
        for (int j=0; j<TAM; ++j){
            ans.m[i][j] = 0LL;
            for (int k=0; k<TAM; ++k){
                ans.m[i][j] += a.m[i][k]*b.m[k][j];
            }
            ans.m[i][j] = (ans.m[i][j]+MOD)%MOD;
        }
    }
    return ans;
}

matrix fexpo(matrix b, i64 e){
    matrix ans;
    for (int i=0; i<TAM; ++i) {
        for (int j=0; j<TAM; ++j) {
            ans.m[i][j] = (i==j) ? 1LL : 0LL;
        }
    }
    while (e){
        if (e & 1LL) ans = mult(ans, b);
        b = mult(b, b);
        e >>= 1;
    }
    return ans;
}

i64  t, m, a[MAX], l, ans;
matrix pre, tf, f;

int main(){_
    pre = {{{1,0,0},{1,0,0},{0,0,0}}};
    
    cin >> t >> m;
    t %= MOD;

    tf = {{{1,1,MOD-t},{0,1,MOD-t},{0,1,0}}};
    
    l = 0;
    for (int i=m; i--;){
        cin >> a[i];
        l= max(l,a[i]);
    }

    f = fexpo(tf, l-1);
    f = mult(f, pre);
    ans = f.m[0][0];

    for (int i=m; i--;){
        f = fexpo(tf, a[i]-1);
        f = mult(f, pre);
        ans -= f.m[1][0];
        ans = (ans + MOD)%MOD;
    }
    cout << ans << endl;
    return 0;
}
