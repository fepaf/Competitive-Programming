#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<9)
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

int n, m, si, sj, vis[MAX][MAX];
char c[MAX][MAX];

void f(int i, int j){
    if (i<1 || i>n || j<1 || j>m) return;

    if (vis[i][j]) return;
    
    if (c[i][j]=='.') {
        c[i][j] = 'o';

        if (c[i+1][j]=='.'){
            if (!vis[i+1][j]) f(i+1,j);
        }
        else if(c[i+1][j]=='#'){
            if (!vis[i][j-1]) f(i,j-1); 
            if (!vis[i][j+1]) f(i,j+1);
        }
    }
    
    
}

int main(){_
    cin >> n >> m;
    for (int i=1; i<=n; ++i){
        for (int j=1; j<=m; ++j){
            cin >> c[i][j];
            if (c[i][j] == 'o'){
                si = i; sj = j;
            }
        }
    }
    c[si][sj] = '.';
    f(si, sj);
    for (int i=1; i<=n; ++i){
        for (int j=1; j<=m; ++j){
            cout << c[i][j];
        }
        cout << endl;
    }
    return 0;
}
