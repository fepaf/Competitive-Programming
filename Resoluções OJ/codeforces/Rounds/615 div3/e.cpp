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

int n, m;
int ans, p, part;

int main(){_
    cin >> n >> m;
    int a[n][m];
    int shift[n];
    for (int i=0;i<n;++i){
        for (int j=0;j<m;++j){
            cin >> a[i][j];
            a[i][j]--;
        }
        shift[i] = 0;
    }
    for (int i=0;i<m;++i){
        for (int j=0;j<n;++j){
           if ((a[j][i]%m) != i || a[j][i] >= n*m) continue;
            p = (a[j][i]-i)/m;
            shift[(j-p+n)%n]++;
        }
        part = INT_MAX;
        for (int j=0; j<n; ++j){
            part = min(part, n-shift[j]+j);
            shift[j] = 0;    
        }
        ans += part;
    }
    cout << ans << endl;
	return 0;
}
