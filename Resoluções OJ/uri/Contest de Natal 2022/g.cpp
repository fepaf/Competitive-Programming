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

struct enfeite{
    int v;
    int x;
    string s;
};

enfeite a[MAX];

bool cmp(enfeite a, enfeite b){
    if (a.v != b.v) return a.v < b.v;
    if (a.x != b.x) return a.x > b.x;
    return a.s < b.s;
}

int n, m;

int main(){_
    cin >> n >> m;
    for (int i=n; i--;){
        cin >> a[i].s >> a[i].v >> a[i].x;
    }
    sort(a, a+n, cmp);
    for (int i=0; i<n; ++i){
        m -= a[i].v;
        if (m<0) break;
        cout << a[i].s << endl;
    }
    return 0;
}
