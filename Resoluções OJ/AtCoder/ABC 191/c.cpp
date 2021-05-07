#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
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
#define W(x) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;

using namespace std;

int h, w, costa[MAX][MAX], ans, lados;
char a[MAX][MAX], c;

int main(){_
    cin >> h >> w;
    for (int i=0; i<h; ++i){
        for (int j=0; j<w; ++j){
            cin >> a[i][j];
            c = a[i][j];
            if (c=='#'){
                costa[i][j] = 1;
                lados = (a[i-1][j]=='.');
                lados += (a[i+1][j]=='.');
                lados += (a[i][j-1]=='.');
                lados += (a[i][j+1]=='.');

                if(lados>1) ans += lados;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
/*
.....
.###.
..##.
.###.
.....


*/
