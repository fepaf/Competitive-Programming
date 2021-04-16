#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<16)
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

int n, k;
double s[MAX], ans;

int main(){_
    cin >> n >> k;
    for (int i=1; i<=n; i++){
        cin >> s[i];
        s[i]+=s[i-1];
    }
    for (int t=k; t<=n; ++t){
        for (int j=t; j<=n; ++j){
            ans = max(ans, (s[j]-s[j-t])/t);
        }
    }
    cout << setprecision(10) << ans << endl;
    return 0;
}
