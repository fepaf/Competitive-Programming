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

int n, x[MAX], y[MAX], p[MAX], mat, ans;
set<int> pontos;
map<int,int> adr;

int main(){_
    cin >> n;
    for (int i=n; i--;){
        cin >> x[i] >> y[i];
        pontos.insert(x[i]);
        pontos.insert(x[i]+y[i]);
    }
    for (int a : pontos){
        adr[a] = ++mat;
    }
    for (int i=n; i--;){
        ++p[adr[x[i]]];
        --p[adr[x[i]+y[i]]];
    }
    for (int i=1; i<=mat+5; ++i){
        p[i] += p[i-1];
        ans = max(ans, p[i]);
    }
    cout << ans << endl;
    return 0;
}
