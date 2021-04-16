#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
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

i64 t, n, q, a, b;
map<i64, i64> f;

i64 c(i64 b){
    i64 ans = 0, qtd;
    for (int i=30; i--;){
        qtd = (min(b/(1<<i), f[1<<i]));
        ans+=qtd;
        b-=(qtd<<i);
    }
    return (b==0 ? ans : -1);
}

int main(){_
    cin >> n >> q;
    for (int i=n; i--;){
        cin >> a;
        ++f[a];
    }
    while (q--){
        cin >> b;
        cout << c(b) << endl;
    }
    return 0;
}
