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

/*
soma dos bits setados da representacao binaria de todos os numeros entre A e B inclusive
*/


using namespace std;

i64 dp[60][2][200];
i64 n,m,a,b;
vi dig;
string c;

vi getDigit(i64 x){
    vi digitos;

    do{
        digitos.eb(x%2);
        x/=2;
    }while(x);

    return digitos;
}

i64 solve(int idx, int restrito, int sum){
    if (idx==-1) return 1LL<<sum;

    if (~dp[idx][restrito][sum]) return dp[idx][restrito][sum];

    int limit = (restrito ? dig[idx] : 1);

    i64 ans = 0LL;

    for (int d=0; d<=limit; d++){
        ans += solve(idx-1, (d < dig[idx] ? 0 : restrito), sum+d);
    }

    return dp[idx][restrito][sum] = ans;
}

i64 f(i64 x){
    dig = getDigit(x);

    memset(dp,-1,sizeof(dp));

    return solve(dig.size()-1,1,0);
}

i64 lo, hi, md;

int main(){_
    while ((cin>>n)&&(~n)){
        lo = 0, hi=1LL<<42;
        while (lo < hi){
            md = lo+((hi-lo)>>1);

            if (f(md)>=n) hi=md;
            else lo=md+1;
        }
        cout << (n ? lo+1 : n) << endl;
    }
}