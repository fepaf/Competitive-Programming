#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
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
Problem: Network Breakdown
Link: https://cses.fi/problemset/task/1677
*/

int n, m, k, comp;
int pai[MAX];
set<ii> a, b;
vii ar, br;
vi ans;

int id(int n){
    return pai[n]==n ? pai[n] : pai[n]=id(pai[n]);
}

void join(int u, int v){
    u = id(u), v = id(v);
    pai[v] = u;
}

void init(int n){
    for (int i=n+1; i--;){
        pai[i]=i;
    }
}

int u, v;

int main(){_
    cin >> n >> m >> k;
    init(n);
    for (int i=m; i--;){
        cin >> u >> v;
        if (u > v) swap(u, v);
        a.insert({u, v});
        ar.eb(u,v);
    }
    for (int i=k; i--;){
        cin >> u >> v;
        if (u > v) swap(u, v);
        b.insert({u, v});
        br.eb(u,v);
    }
    comp = n;
    for (auto [u, v] : a){
        if (!b.count({u, v})){
            if (id(u) != id(v)){
                join(u, v);
                --comp;
            }
        }
    }
    reverse(all(br));
    ans.eb(comp);
    for (auto [u, v] : br ){
        if (id(u) != id(v)){
            --comp;
            join(u, v);
        }
        ans.eb(comp);
    }
    reverse(all(ans));
    ans.erase(ans.begin());
    for (int ri : ans){
        cout << ri << ' ';
    }
    cout << endl;
    return 0;     
}
