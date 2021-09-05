#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#ifdef ONLINE_JUDGE
#define endl '\n'
#endif
#define INF 0x3f3f3f3f
#define MAX (1000006)
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

int a, b, expo[MAX], ans;
vi primos, dvo[MAX];

int main(){_
    for (int i=2; i<MAX; ++i){
        if (!sz(dvo[i])){
            primos.eb(i);
            for (int j=i; j<MAX; j+=i){
                dvo[j].eb(i);
            }
        }
    }

    cin >> a >> b;
    for (int i=a; i<=b; ++i){
        for (int p : dvo[i]){
            for (int n = i; n % p == 0; n /= p){
                ++expo[p];
            }
        }
    }
    for (int p : primos){
        ans ^= expo[p];
    }
    cout << (ans ? "Chico" : "Didigo") << endl;
    return 0;
}
