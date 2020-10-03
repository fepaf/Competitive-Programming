#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MOD 1000000007
#define MAX (1<<20)
#define MAXN (1<<10)
#define MAXC (1<<10)
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

// Dado uma uma mochila de capacidade C (em unidades de peso) e N objetos com valor Vi e Pi, qual
// maior valor valor armazenável na mochila?

int n, p[MAXN], v[MAXN], memo[MAXN][MAXC], dp[MAXN][MAXC], c;

/*
f(idx, cap) = Maior valor numa mochila de capacidade CAP e considerando os primeiros IDX elementos

* max(f(idx-1, cap-p[idx]) + v[idx] , f(idx-1, cap)) if p[idx]<=cap
* f(idx-1, cap) se p[idx]>cap
* 0 se cap=0
* 0 se idx < 1
*/

int f(int idx, int cap){
    if (idx<1) return 0;
    
    if (cap==0) return 0;

    if (~memo[idx][cap]) return memo[idx][cap];

    int ans;
    if (p[idx]<=cap){
        ans = max(f(idx-1, cap-p[idx]) + v[idx] , f(idx-1, cap));
    } else{
        ans = f(idx-1, cap);
    }

    return memo[idx][cap] = ans;
}


/*
f(idx, cap) = maior valor armazenado na mochila considerando a partir do IDX-ésimo elemento e com
capacidade CAP

int f(int idx, int cap){
    if (idx>n) return 0;
    
    if (cap==0) return 0;

    if (~memo[idx][cap]) return memo[idx][cap];

    int ans;
    if (p[idx]<=cap){
        ans = max(f(idx+1, cap-p[idx]) + v[idx] , f(idx+1, cap));
    } else{
        ans = f(idx+1, cap);
    }

    return memo[idx][cap] = ans;
}

a resposta estaria em f(1, C)
*/

int main(){_
    cin >> n >> c;

    for (int i=1; i<=n; ++i)  {
        cin >> p[i] >> v[i];
    }

    for (int i=0; i<=n; ++i){
        for (int j=0; j<=c; ++j){
            memo[i][j] = -1;
        }
    }

    for(int i=0; i<=n; ++i){
        dp[i][0] = 0;
    }
    for(int i=0; i<=c; ++i){
        dp[0][i] = 0;
    }
    
    for (int idx=1; idx<=n; ++idx){
        for (int cap=1; cap<=c; cap++){
            if (p[idx] <= cap){
                dp[idx][cap] = max(dp[idx-1][cap-p[idx]] + v[idx], dp[idx-1][cap]);
            } else {
                dp[idx][cap] = dp[idx-1][cap];
            }
        }
    }

    cout << dp[n][c] << endl;
    return 0;
}