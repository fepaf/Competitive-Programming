#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#ifdef ONLINE_JUDGE
#define endl '\n'
#endif
#define INF 0x3f3f3f3f
#define MAX (1<<20)
#define MAXLIM 310
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

int n, p[MAX], k, memo[1<<10][MAXLIM+1];

int f(int idx, int last){

    if (idx==n) return 0;

    int &ans = memo[idx][last];

    if (~ans) return ans;

    ans = INF;

    int lim = min(MAXLIM, last+k);
    for (int i=max(last-k, 0); i<=lim; ++i){
        ans = min(ans, f(idx+1, i)+abs(i-p[idx]));
    }

    return ans;
}

int main(){_
    cin >> n >> k;
    for (int i=0; i<n; ++i){
        cin >> p[i];
    }
    memset(memo,-1,sizeof(memo));
    int ans = INF;
    for (int i=0; i<MAXLIM; ++i){
        ans = min(ans, f(0, i));
    }
    cout << ans << endl;
    return 0;
}
