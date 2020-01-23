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
#define eb push_back
#define vi vector<int>
#define vvi vector<vi>
#define vii vector<ii>
#define vvii vector<vii>
#define lsb(x) ((x) & (-x))
#define gcd(x,y) __gcd((x),(y))

using namespace std;

int t;
int n;
int x[MAX], y[MAX];
int grid[MAX][MAX];
vii pkg;
string ans;
int c;

int main(){_
    for (cin >> t; t--;){
        cin >> n;
        for (int i=0; i<n; ++i){
            cin >> x[i] >> y[i];
            grid[y[i]][x[i]] = 1;
        }
        for (int i=0; i<=1000; ++i){
            for (int j=0; j<=1000; ++j){
                if (grid[i][j]){
                    pkg.eb({i,j});
                    grid[i][j]=0;
                }
            }
        }
        int lx=0, ly=0;
        c = 0;
        ans = "";
        for (auto p : pkg){
            int y = p.fs, x = p.sc;
            if (y>=ly && x>=lx){
                ++c;
                for (int i=x-lx; i--;){
                    ans += 'R';
                }
                for (int i=y-ly; i--;){
                    ans += 'U';
                }
                ly = y, lx = x;
            }
        }
        pkg.clear();
        if (c!=n){
            cout << "NO" << endl;
        } 
        else {
            cout << "YES" << endl << ans << endl;
        }
    }
	return 0;
}
