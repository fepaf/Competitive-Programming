#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
// #define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<10)
#define MAXN  (1<<10)+2 // 2**10=1024 aporximadamente 1000
#define MOD 1000000007
#define BRANCO 0
#define CINZA 1
#define PRETO 2
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

int n, m;
char mat[MAX][MAX];
int pode[MAX][MAX], cor[MAX][MAX], d[]={-1,0,1,0}, total;

/*
Pinta cada área de '.'s com uma "cor" diferente
*/

void ff(int i, int j, int c){
    pode[i][j] = 0;
    cor[i][j] = c;

    for (int k=4; k--;){
        int a = i+d[k];
        int b = j+d[3-k];

        if (pode[a][b]==1 && mat[a][b]=='.'){
            ff(a, b, c);
        }
    }
}

int main(){_
    cin >> n >> m;
    for (int i=1; i<=n; ++i){
        for (int j=1; j<=m; ++j){
            cin >> mat[i][j];
            pode[i][j] = 1;
        }
    }
    for (int i=1; i<=n; ++i){
        for (int j=1; j<=m; ++j){
            if (pode[i][j] && mat[i][j]=='.'){
                ff(i, j, ++total);
            }
        }
    }
    for (int i=1; i<=n; ++i){
        for (int j=1; j<=m; ++j){
            cout << cor[i][j] << ' ';
        }
        cout << '\n';
    }
    
    return 0;
}
