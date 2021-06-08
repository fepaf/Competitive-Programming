#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#ifdef ONLINE_JUDGE
#define endl '\n'
#endif
#define INF 0x3f3f3f3f
#define MAX (1<<20)
#define OUT MAX
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
#define esq(x) (x<<1)
#define dir(x) ((x<<1)|1)
#define W(x) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;

using namespace std;

int n, k;
char a[MAX];
vector<char> path;
vi vis;

int qtd_vis(int n){
    return (accumulate(all(vis), 0)==n);
}

void imprimi(vector<char> a){
    for (auto ai : a){
        cout << ai << ' ';
    }
    cout << endl;
}

void gera(int u, vi vis){
    if (accumulate(all(vis), 0)==k){
        imprimi(path);
        return;
    }
    // cout << accumulate(all(vis), 0) << endl;

    for (int v=u; v<n; ++v){
        if (!vis[v]){
            vis[v] = 1;
            path.eb(a[v]);
            gera(v, vis);
            vis[v] = 0;
            path.pop_back();
        }
    }
}


int main(){_
    cin >> n >> k;
    for (int i=0; i<n; ++i){
        cin >> a[i];
    }
    vis = vi(n, 0);
    gera(0, vis);
    return 0;
}
