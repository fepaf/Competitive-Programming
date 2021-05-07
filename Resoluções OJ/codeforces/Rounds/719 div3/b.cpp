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

i64 t, n, tam;
string s;
set<char> cj;

int main(){_
    for (cin >> t; t--;){
        cin >> n;
        s = to_string(n);
        tam = sz(s);
        i64 ans = 0;
        i64 ord = 1;
        i64 passo = 1;
        for (i64 i=1, passo=1; i<=tam; ++i){
            ord = passo;
            for (i64 j=1; j<=9; ++j, ord+=passo){
                ans += (ord<=n);
                // if (ord<=n){
                //     W(ord)
                // }
            }
            passo = 10*passo+1;
        }
        cout << ans << endl;
    }
    return 0;
}
