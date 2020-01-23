#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<19)
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
#define left(u) (2*u)
#define right(u) (2*u+1)
#define mid(i,j) ((i+j)/2)
#define FLAG -1

using namespace std;

int q, x;
int y[MAX];
int n, m;
map<int, int> f, id;
set<int> r;
int num[MAX];

int a[MAX], i , v, l;
string op;

int tree[4*MAX];

int operacao(int esq, int dir){
    return a[tree[esq]] <= a[tree[dir]] ? tree[esq] : tree[dir];
}

void build(int u, int i, int j){

    if (i == j){
        tree[u] = i;
        return;
    }

    build(left(u), i, mid(i,j));
    build(right(u), mid(i,j)+1, j);

    tree[u] = operacao(left(u), right(u));
}

void update(int u, int i, int j, int idx, int val){

    if (i == j){
        tree[u] = i;
        a[i] += val;
        return;
    }

    if (i<=idx && idx<=mid(i,j)){
        update(left(u), i, mid(i,j), idx, val); // esquerda
    }
    if (mid(i,j)+1<=idx && idx<=j){
        update(right(u), mid(i,j)+1, j, idx, val); // direita
    }

    tree[u] = operacao(left(u), right(u));
}

int query(int u, int i, int j, int l, int r){

    if (l<=i && j<=r){
        return tree[u];
    }

    if (j<l || i>r){
        return FLAG;
    }

    int ans_esq = query(left(u), i, mid(i,j), l, r);
    int ans_dir = query(right(u), mid(i,j)+1, j, l, r);

    if (ans_dir == FLAG) return ans_esq;
    if (ans_esq == FLAG) return ans_dir;

    return operacao(ans_esq, ans_dir); //
}

int t;

int main(){_
    cin >> q >> x;
    for (int i=0; i<q; ++i){
        cin >> y[i];
        y[i] %= x;
    }
    n = min(x, 400001);    
    build(1, 1, n);
    for (int i=0; i<q; ++i){
        if (y[i]<n) update(1,1,n,y[i]+1,1);
        t = query(1,1,n,1,n);
        m = a[t]*x + t-1;        
        cout << m << endl;
    }
    cout << endl;
	return 0;
}
