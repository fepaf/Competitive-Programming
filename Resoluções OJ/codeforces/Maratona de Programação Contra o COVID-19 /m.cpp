#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<20)
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

int n, f, q;
int a, b;
int pai[MAX], tam[MAX], sk[MAX];
int x;

void init(int n){
    for (int i=n+1;i--;){
        pai[i] = i;
        tam[i] = 1;
    }
}

int id(int n){
    return pai[n] == n ? pai[n] : pai[n]=id(pai[n]);
}

void join(int u, int v){
    u = id(u), v = id(v);

    pai[v] = u;
    tam[u] += tam[v];
    sk[u] |= sk[v];
}

int op;

int main(){_
    cin >> n >> f >> q;
    init(n);
    while (f--){
        cin >> x;
        sk[x] = 1;
    }
    while (q--){
        cin >> op;
        if (op==1){
            cin >> a >> b;
            join(a,b);
        }
        else{
            cin >> a;
            cout << sk[id(a)] * tam[id(a)] << endl;
        }
    }
    return 0;
}
