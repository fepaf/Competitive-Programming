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

int s, c, a, b, d, dist[1<<8][1<<8];

int main(){_
    cin >> s >> c;
    for (int i=1; i<=s; ++i){
        for (int j=1; j<=s; ++j){
            dist[i][j] = (i==j ? 0 : INF);
        }
    }
    while (c--){
        cin >> a >> b >> d;
        dist[a][b] = dist[b][a] = d;
    }
    for (int k=1; k<=s; ++k){
        for (int i=1; i<=s; ++i){
            for (int j=1; j<=s; ++j){
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }
    int ans, x;
    ans = INT_MAX;
    for (int i=1; i<=s; ++i){
        x = 0;
        for (int j=1; j<=s; ++j){
            x = max(x, dist[i][j]);
        }
        ans = min(ans, x);
    }
    cout << ans << endl;
    return 0;
}