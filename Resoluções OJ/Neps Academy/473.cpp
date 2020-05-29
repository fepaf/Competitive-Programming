#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<10)
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

int l, c, ans, zeros;
int x[MAX][MAX], a[MAX][MAX], dp[MAX][MAX], t0[MAX], nge[MAX], ngr[MAX];
stack<int> p;

int main(){_
    cin >> l >> c;
    for (int i=1; i<=l; ++i) a[i][1] = INT_MAX;
    for (int i=1; i<=c; ++i) a[1][i] = INT_MAX;
    for (int i=1; i<=l; ++i){
        for (int j=1; j<=c; ++j){
            cin >> x[i][j];
            if (i>1 && j>1 && x[i][j] + x[i-1][j-1] <= x[i-1][j] + x[i][j-1]){
                a[i][j] = 1;
            }
        }
    }
    for (int i=1; i<=l; ++i){
        for (int j=1; j<=c; ++j){
            t0[j] = (a[i][j]!=1 ? i : t0[j]);
            zeros += (a[i][j] == 0);
        }
        for (int j=1; j<=c; ++j){
            while (!p.empty() && t0[p.top()] <= t0[j]){
                p.pop();
            }
            nge[j] = (p.empty() ? 1 : p.top());
            p.push(j);
        }
        while (!p.empty()) p.pop();
        for (int j=c; j>=1; --j){
            while (!p.empty() && t0[p.top()] <= t0[j]){
                p.pop();
            }
            ngr[j] = (p.empty() ? c+1 : p.top());
            p.push(j);
        }
        while (!p.empty()) p.pop();        
        for (int j=1; j<=c; ++j){
            ans = max(ans, (i-t0[j]+1)*(ngr[j]-nge[j]));
        }
    }
    cout << ans*(zeros!=(l-1)*(c-1)) << endl; //caso nem testam uma 2x2 nao super-legal
    return 0;
}
