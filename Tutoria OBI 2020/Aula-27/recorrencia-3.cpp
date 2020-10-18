#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
// #define endl '\n'
#define INF 0x3f3f3f3f
#define MOD 1000000007
#define MAX 3
#define MAXN (1<<10)
#define MAXC (1<<10)
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

// N-ésimo termo de tribonacci em o(3**3*log(n))
// A1 = 1, A2 = 0, A3 = 2

struct matrix{
    i64 m[MAX][MAX];
};

matrix mult(matrix a, matrix b, int m){
    matrix ans;
    for (int i=0; i<MAX; ++i){
        for (int j=0; j<MAX; ++j){
            ans.m[i][j] = 0LL;
            for (int k=0; k<MAX; ++k){
                ans.m[i][j] += (a.m[i][k]*b.m[k][j]);
            }
            ans.m[i][j] = (ans.m[i][j]+m)%m; // se o M for aproximadamente 1 bilhão é preferível fazer a modulação aqui pra evitar TLE
        }
    }

    return ans;
}

matrix fexpo(matrix b, i64 e, int m){
    matrix ans;

    //inicializar ANS como matriz identidade
    for (int i=0; i<MAX; ++i){
        for (int j=0; j<MAX; ++j){
            ans.m[i][j] = (i==j ? 1 : 0);
        }
    }

    //Algoritmo da exponenciação rápida mas adaptado para matriz
    while (e){
        if (e & 1) ans = mult(ans, b, m);
        b = mult(b, b, m);
        e >>= 1;
    }

    return ans;
}

matrix t, ans, p;
int n;

int main(){_
    t = {
            {
                {1, 1, 1},
                {1, 0, 0},
                {0, 1, 0}
            }
        };
    
    p = {
        {
            {1, 1, 1},
            {-2, 0, 0},
            {2, 1, 0}
        }
    };

    cin >> n;

    t = fexpo(t, n, MOD);
    ans = mult(t, p, MOD);

    for (int i=0; i<MAX; ++i){
        for (int j=0; j<MAX; ++j){
            cout << ans.m[i][j] << ' ';
        }
        cout << endl;
    }

    cout << ans.m[0][0] << endl;

    return 0;
}