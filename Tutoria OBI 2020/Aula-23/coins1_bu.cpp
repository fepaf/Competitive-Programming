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
int n, x, c[MAX], dp[MAX];


int main(){_
    cin >> n >> x;

    for (int i=1; i<=n; ++i)  {
        cin >> c[i];
    }

    dp[0] = 1;
    for (int soma=1; soma<=x; ++soma){
        for (int i=1; i<=n; ++i){
            if (soma-c[i]>=0){
                dp[soma] = (dp[soma] + dp[soma-c[i]]) % MOD;
            }
        }
    }

    cout << dp[x] << endl;
    return 0;
}