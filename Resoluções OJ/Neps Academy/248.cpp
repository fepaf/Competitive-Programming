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

int n;
vii c;

int main(){_
    cin >> n;
    c = vii(n);
    for (ii &a : c){
        cin >> a.sc >> a.fs;
        a.sc = -a.sc;
    }
    sort(all(c));
    int ans = 1;
    for (int i=0, on=0; i<n; ++i){
        if (-c[i].sc >= c[on].fs){
            on = i;
            ++ans;
        }
    }
    cout << ans << endl;
    return 0;
}
