#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 0x3f3f3f3f
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

string xx, yy;
int n;

int main(){_
    cin >> xx >> yy;
    int n = sz(xx);
    int ans = 0;
    for (int i=n; i--;){
        ans += (xx[i]!=yy[i]);
    }
    cout << ans << endl;
    return 0;
}
