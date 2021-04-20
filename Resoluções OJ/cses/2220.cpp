#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF (1LL<<60)
#define MAX (1<<20)
#define MOD 1000000007
#define i64 long long
#define all(x) (x).begin() , (x).end()
#define sz(x) (int)(x).size()
#define ii pair<i64, i64>
#define fs first
#define sc second
#define eb emplace_back
#define vi vector<i64>
#define vvi vector<vi>
#define vii vector<ii>
#define vvii vector<vii>
#define lsb(x) ((x) & (-x))
#define gcd(x,y) __gcd((x),(y))
#define W(x) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;
#define branco 0
#define cinza -1
#define preto 1

using namespace std;

/*
Problem: Counting Numbers 
Link: https://cses.fi/problemset/task/2220
*/

i64 n, a, b, memo[20][2][10], pos;
vi dig;

vi get_digits(i64 x){
    vi dig;
    do{
        dig.eb(x%10);
        x/=10;
    }while(x);
    return dig;
}

i64 solve(int idx, int lim, int last){
    if (idx == -1) return 1;
    i64 &ans = memo[idx][lim][last];
    if (~ans) return ans;
    int l = (lim ? dig[idx] : 9);
    ans = 0LL;
    for (int d=0; d<=l; ++d){
        if (d==last) continue;
        ans += solve(idx-1, (d < dig[idx] ? 0 : lim), d);
    }
    return ans;
}

i64 f(i64 x){
    dig = get_digits(x);
    if (x==-1) return -1;
    n = sz(dig);
    i64 ans = 0;
    memset(memo,-1,sizeof(memo));
    for (int max_pos=n; max_pos--;){
        ans += solve(max_pos, max_pos==n-1, 0);
    }
    return ans;
}

int main(){_
    while (cin >> a >> b){
        cout << f(b)-f(a-1) << endl;
    }
    return 0;     
}
