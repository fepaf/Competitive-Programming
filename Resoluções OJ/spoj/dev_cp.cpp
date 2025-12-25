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

int n, m, a, b, k, x;
i64 ft[MAX];

void update(int idx, i64 val){
    while (idx<=n){
        ft[idx] += val;
        idx += lsb(idx);
    }
}

i64 query(int idx){
    i64 ans = 0;
    while (idx>0){
        ans += ft[idx];
        idx -= lsb(idx);
    }
    return ans;
}

int op;

int main(){_
    cin >> n >> m;
    for (int i=1; i<=n; ++i){
        cin >> x;
        update(i, x);
    }
    while(m--){
        cin >> op;
        if (op&2){
            cin >> a >> b;
            cout << (query(b)-query(a-1)) << endl;
        } else {
            cin >> k >> x;
            update(k, x-query(k)+query(k-1));
        }
    }
    return 0;
}
