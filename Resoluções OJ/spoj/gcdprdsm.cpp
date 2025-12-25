#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#ifdef ONLINE_JUDGE
#define endl '\n'
#endif
#define INF 0x3f3f3f3f
#define MAX (1<<20)
#define MAXN (1000012)
#define OUT MAX
#define MOD 1000000007
#define i64 unsigned long long
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

i64 phi[MAX], ans[MAX];
i64 brute[MAX];
i64 n, q;

i64 f(i64 x){
    return x == 1 ? 1 : ((x*phi[x])>>1);
}

int main(){_
            
    phi[1] = 1;
    for (i64 i=2; i<=MAXN; ++i){
        phi[i] = i-1;
    }
    
    for (i64 i=2; i<=MAXN; i++){
        for (i64 j=i+i; j<=MAXN; j+=i){
            phi[j] -= phi[i];
        }
    }

    ans[1] += f(1);
    for (i64 d=2; d<=MAXN; ++d){
        ans[d] += f(d);
        for (i64 m=d, j=1; m<=MAXN; m+=d, ++j){
            ans[m] += (d*d*f(j));
        }
    }

    cin >> q;
    while(q--){
        cin >> n;
        cout << ans[n] << endl;
    }

    return 0;
}
