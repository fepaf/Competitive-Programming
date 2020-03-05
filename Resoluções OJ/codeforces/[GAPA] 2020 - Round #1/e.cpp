#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<10)
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

int dp[MAX][MAX];
int n, a, b;

int f(int i, int j){
    if (i>200  || j > 200) return 0;
    
    if (i==0 || j==0) return 0;

    if (i<0 || j<0) return -1;

    if (~dp[i][j]) return dp[i][j];

    return dp[i][j] = max(f(i+1,j-2), f(i-2, j+1)) + 1;
}

int main(){_
    memset(dp, -1, sizeof(dp));
    cin >> a >> b;
    cout << f(a,b) << endl;
    return 0;
}
