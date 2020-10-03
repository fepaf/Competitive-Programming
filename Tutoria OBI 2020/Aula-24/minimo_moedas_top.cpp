#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MOD 1000000007
#define MAX (1<<20)
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

// Quantidada minima de moedas para formar um determinado valor de troco

int n, v, a[MAX], memo[MAX];

/*
f(x) = mínimo número de moedas para fazer valor X
* min(f(x-a[i])+1) para todo i em [1..N]
* INF se x<0
* 0 se x=0
*/

int f(int x){
    if (x==0) return 0;

    if (x<0) return INF;

    if (~memo[x]) return memo[x];

    int ans = INF;
    for (int i=1; i<=n; ++i){
        ans = min(ans, f(x-a[i])+1);
    }

    return memo[x] = ans;
}

int main(){_
    cin >> v >> n;

    for (int i=1; i<=n; ++i)  {
        cin >> a[i];
    }

    for (int i=v; i>=0; --i){
        memo[i] = -1;
    }

    cout << f(v) << endl;
    return 0;
}