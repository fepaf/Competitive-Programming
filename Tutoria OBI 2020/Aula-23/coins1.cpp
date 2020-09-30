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

/*
f(x) = quantidade de formas de fazer x como soma de elementos de c[1..n]

f(x) = f(x-c[1]) + f(x-c[2])+f(x-c[3])...  se x > 0
1 se x=0
0 se x<0
*/
int n, x, c[MAX], memo[MAX];

int f(int soma){
    if (soma==0) return 1;
    if (soma<0) return 0;
    
    if (~memo[soma]) return memo[soma];

    int ans = 0;
    for (int i=1; i<=n; ++i){
        ans = (ans + f(soma-c[i]))%MOD;
    }

    return memo[soma] = ans;
}

int main(){_
    cin >> n >> x;
    for (int i=1; i<=n; ++i)  {
        cin >> c[i];
    }

    for (int i=0; i<=x; ++i){
        memo[i] = -1;
    }

    cout << f(x) << endl;
    return 0;
}