#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
// #define endl '\n'
#define INF 0x3f3f3f3f
#define MAXN (1<<20) // 2**20 
#define MAXM (1<<10)
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
#define W(x) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;
#define UNCALCULED -1000000008

using namespace std;

int memo[MAXN];
int n, m, a, b;
// Dado uma barra de tamanhon N, quantas formas de cortar em tamanhos A e B,
// sem sobras!

int f(int n){
    if (n < 0) return 0;

    if (n == 0) return 1;
    
    if (memo[n] != UNCALCULED) return memo[n];

    return memo[n] = f(n-a)+f(n-b);
}

int main(){_


    cin >> n >> a >> b;
    
    for (int i=0; i<=n; ++i){
        memo[i] = UNCALCULED;
    }

    cout << f(n) << endl;
    return 0;
}
