#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF (2e18)
#define MAX (100)
#define MOD 1000000007
#define i64 long long
#define all(x) (x).begin() , (x).end()
#define sz(x) (int)(x).size()
#define ii antr<int, int>
#define fs first
#define sc second
#define eb emplace_back
#define vi vector<int>
#define vvi vector<vi>
#define vii vector<ii>
#define vvii vector<vii>
#define lsb(x) ((x) & (-x))
#define gcd(x,y) __gcd((x),(y))
#define W(x) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;
#define branco 0
#define cinza -1
#define preto 1

using namespace std;

/*
Problem: Graph Paths II
Link: https://cses.fi/problemset/task/1724
*/

i64 n, m, k, u, v, w;

struct matrix {
    i64 m[MAX][MAX];
};

matrix mult(matrix a, matrix b){
    matrix ans;
    for (int i=0; i<n; ++i){
        for (int j=0; j<n; ++j){
            ans.m[i][j] = INF;
            for (int k=0; k<n; ++k){
                ans.m[i][j] = min(ans.m[i][j], a.m[i][k]+b.m[k][j]);
            }
        }
    }
    return ans;
}

matrix fastpow(matrix b, i64 e){
    matrix ans;
    for (int i=0; i<n; ++i){
        for (int j=0; j<n; ++j){
            ans.m[i][j] = i!=j ? INF : 0;
        }
    }
    for(; e; b=mult(b,b), e>>=1LL) if (e&1LL) ans=mult(ans,b);
    return ans;
}

matrix adj;

int main(){_
    cin >> n >> m >> k;

    for (int i=0; i<n; ++i){
        for (int j=0; j<n; ++j){
            adj.m[i][j] = INF;
        }
    }

    while(m--){
        cin >> u >> v >> w;
        --u, --v;
        adj.m[u][v] = min(adj.m[u][v], w);
    }

    adj = fastpow(adj, k);

    i64 &ans = adj.m[0][n-1];
    cout << (ans != INF ? ans : -1 ) << endl;

    return 0;     
}
