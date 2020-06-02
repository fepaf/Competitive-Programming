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

int n, x;
vi a, s, d;

int main(){_
    cin >> n;
    for (int i=1; i<=n; ++i){
        cin >> x;
        s.eb(x+i);
        d.eb(x-i);
    }
    sort(all(s));
    sort(all(d));
    cout << s[n-1]+d[n-1] << endl;
    return 0;
}
