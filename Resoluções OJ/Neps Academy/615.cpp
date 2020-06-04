#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<20)
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

using namespace std;

i64 n, x, s, ans;

int main(){_
    cin >> n;
    vector<i64> a = vector<i64>(n);
    for (i64 &num : a){
        cin >> num;
        s += num;
    }
    s -= (n*(n+1))/2;
    if (s<0 || (s%n)){
        cout << -1 << endl;
        return 0;
    }
    x = (s/n);
    for (int i=1; i<=n; ++i){
        ans += (a[i-1]-x-i)*(a[i-1]>x+i);
    }
    cout << ans << endl;
    return 0;
}