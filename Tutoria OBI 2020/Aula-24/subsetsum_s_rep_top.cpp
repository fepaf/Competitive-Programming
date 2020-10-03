#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MOD 1000000007
#define MAXI (1<<10)
#define MAX (1<<10)
#define MAXS (1<<10)
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
f(i,s) = Se é possível fazer a soma S considerando (não é necessariamente usando!) os I primeiros elementos

* 1 se s=0
* 1 se f(i-1, s)=1
* 1  se f(i-1, s-a[i])=1 
* 0 caso constrário.
*/

// sem repetição dos elementos

int n, x, a[MAX], memo[MAXI][MAXS];


int f(int i, int s){
    if (s<0) return 0;
    
    if (s==0) return 1;
    
    if (i<1) return 0;

    if (~memo[i][s]) return memo[i][s];

    int ans = 0;
    ans = f(i-1, s) | f(i-1, s-a[i]);
    return memo[i][s] = ans;
}

int main(){_
    cin >> x >> n;

    for (int i=1; i<=n; ++i)  {
        cin >> a[i];
    }

    for (int i=1; i<=n; ++i){
        for (int j=0; j<=x; ++j){
            memo[i][j] = -1;
        }
    }

    cout << f(n, x) << endl;
    return 0;
}