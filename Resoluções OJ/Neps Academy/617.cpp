#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f
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

using namespace std;

int k, n, m, x, y;

struct carro{
    int i, l, p, t;
};
carro c[MAX];

int comp(carro a, carro b){
    if (a.p != b. p) return a.p > b.p;
    return a.t < b.t;
}

int main(){_
    cin >> k >> n >> m;
    for (int i=0; i<n; ++i){
       c[i] = {i+1, -1, 0, 12345};
    }
    for (int i=1; i<=m; ++i){
        cin >> x >> y; --x; --y;
        if (y == (c[x].l+1)%k){
            ++c[x].p;
            c[x].l = y;
            c[x].t = i;
        }
    }
    sort(c, c+n, comp);
    cout << c[0].i;
    for (int i=1; i<n; ++i)   {
        cout << ' ' << c[i].i;
    }
    cout << endl;
    return 0;
}