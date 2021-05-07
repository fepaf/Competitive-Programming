#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#ifdef ONLINE_JUDGE
#define endl '\n'
#endif
#define INF (2e18)
#define MAX (1<<20)
#define MOD 1000000007
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
#define W(x) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;
#define branco 0
#define cinza -1
#define preto 1

using namespace std;

/*
Problem: School Excursion
Link: https://cses.fi/problemset/task/1706
*/
 
int s, pai[MAX];
int n, m, a, b;
map<int, int> tam, f;
vi t;

int id(int n){
    return n == pai[n] ? n : pai[n] = id(pai[n]);
}

void join(int u, int v){
    u = id(u), v = id(v);
    pai[v] = u;
}

void init(int n){
    for(int i=n+1; i--;){
        pai[i]=i;
    }
}

bitset<100001> dp;

int main(){_
    cin >> n >> m;
    init(n);
    while (m--){
        cin >> a >> b;
        if (id(a)!=id(b)){
            join(a, b);
        }
    }
    for (int i=1; i<=n; ++i){
        ++tam[id(i)];
    }
    for (auto [k, v] : tam){
        ++f[v];
    }
    for (auto [k, v] : f){//Para cada valor K, cria log(V) copias dele para o subsetsum, onde V eh a quantidade de repeticoes de K
        for(int i=0; (1<<i) < v; ++i){
            t.eb(k<<i);
            v-=(1<<i);
        }
        if (v) t.eb(k*v);
    } 
    sort(all(t), greater<int>());
    dp[0] = 1;
    for (int ti : t){
        dp |= (dp<<ti);
    }
    for (int i=1; i<=n; ++i){
        cout << dp[i];
    }
    cout << endl;
    return 0;     
}
