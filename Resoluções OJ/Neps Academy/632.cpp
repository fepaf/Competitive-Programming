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

int t, n, m, x, y, l, c, a[MAX][MAX];

int main(){_
    while ((cin >> n >> m) && (n||m)){
         l = c = 0;
         for (int i=0; i<n; ++i){
             for (int j=0; j<m; ++j){
                 cin >> a[i][j];
             }
         }
         while ((cin >> x >> y) && (x | y)){
             l = (l-y+n)%n;
             c = (c+x+m)%m;
         }
         cout << "Teste " << ++t << endl;
         for (int i=0; i<n; ++i){
            cout << a[(i-l+n)%n][(0-c+m)%m];
             for (int j=1; j<m; ++j){
                 cout << ' ' << a[(i-l+n)%n][(j-c+m)%m];
             }
             cout << endl;
         }
         cout << endl;
    }
    return 0;
}
