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

int n, m;

int ehprimo(int x){
    if (x==1) return 0;
    for (int j=2; j*j<=x; ++j){
        if (x%j == 0){
            return 0;
        }
    }
    return 1;
}

vi f;

int main(){_
    cin >> n;
    m = n;
    for (int i=2; i*i<=m; ++i){
        if (ehprimo(i)){
            while (n % i == 0){
                f.eb(i);
                n /= i;
            }
        }
    }
    if (ehprimo(n)){
        f.eb(n);
    }
    cout << (sz(f)) << endl;
    for (int p : f){
        cout << p << ' ';
    }
    cout << endl;
    return 0;
}
