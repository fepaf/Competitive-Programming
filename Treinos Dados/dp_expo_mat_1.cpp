#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX 2
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

/*
Resolver a recorrência f(n)=f(n-1)+f(n-2)

O(Log(N) * MAX * MAX * MAX)
*/

struct matrix{
    i64 m[MAX][MAX];
};

matrix mult(matrix a, matrix b){
    matrix ans;

    for (int i=0; i<MAX; ++i){
        for (int j=0; j<MAX; ++j){
            ans.m[i][j] = 0;

            for (int k=0; k<MAX; ++k){
                ans.m[i][j] += (a.m[i][k]*b.m[k][j])%MOD;
            }

            ans.m[i][j] %= MOD;
        }
    }

    return ans;
}

matrix fexpo(matrix b, i64 e){
    matrix ans;

    for (int i=0; i<MAX; i++){
        for (int j=0; j<MAX; ++j){
            ans.m[i][j] = (i==j);
        }
    }

    while (e){
        if (e&1LL) ans = mult(ans, b);
        b = mult(b, b);
        e >>= 1;
    }

    return ans;
}

matrix t, p, ans;
int n;

int main(){_
    t = {
        {
            {1, 1},
            {1, 0}
            }
    };

    p = {
        {
            {0, 0},
            {1, 0}
            }
    };


    cin >> n;

    ans = mult(fexpo(t, n), p);

    cout << ans.m[0][0] << endl;

    // ans = fexpo(t, n);

    // cout << ans.m[0][1] << endl;
    return 0;
}
