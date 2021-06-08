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

i64 n, st[MAX], lazy[MAX], a[MAX];

i64 combine(i64 f, i64 a, i64 b){
    return st[f] = st[a]+st[b];
}

void push(i64 u, i64 i, i64 j){
    st[u] += lazy[u]*(j-i+1);
    if (i != j){
        lazy[esq(u)] += lazy[u];
        lazy[dir(u)] += lazy[u];
    }
    lazy[u] = 0;
}

void build(i64 u, i64 i, i64 j){
    if (i==j){
        st[u] = a[i];
        lazy[u] = 0;
        return ;
    }
    i64 md = (i+j)>>1;
    build(esq(u), i, md);
    build(dir(u), md+1, j);
    st[u] = combine(u, esq(u), dir(u));
    lazy[u] = 0;
}


i64 query(i64 u, i64 i, i64 j, i64 l, i64 r){
    push(u, i, j);

    if (r < i || j < l){
        return 0;
    }

    if (l <= i && j <= r){
        return st[u];
    }

    i64 md = (i+j)>>1;

    i64 anse = query(esq(u), i, md, l, r);
    i64 ansd = query(dir(u), md+1, j, l, r);

    return anse+ansd;
}

void update(i64 u, i64 i, i64 j, i64 l, i64 r, i64 x){
    push(u, i, j);

    if (r<i  || j<l){
        return;
    }

    if (l<=i && j<=r){
        lazy[u] += x;
        push(u, i, j);
        return ;
    }
    i64 md = (i+j)>>1;
    update(esq(u), i, md, l, r, x);
    update(dir(u), md+1, j, l, r, x);
    st[u] = combine(u, esq(u), dir(u));
}

i64 l, r, x, q, op;

int main(){_
    cin >> n >> q;
    for (int i=0; i<n; ++i){
        cin >> a[i];
    }
    build(1, 0, n-1);
    while (q--){
        cin >> op ;
        if (op==1){
            cin >> l >> r >> x;
            update(1, 0, n-1, l-1, r-1, x);
        } else {
            cin >> l;
            cout << query(1, 0, n-1, l-1, l-1) << endl;
        }
    }
    return 0;
}
