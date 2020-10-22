#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (12)
#define i64 long long
#define MOD (1000000007)
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

/*
Problema: https://neps.academy/problem/511
*/

i64 n;

struct matrix{
    i64 m[MAX][MAX];
};

matrix mult(matrix a, matrix b){
    matrix ans;
    for (int i=0; i<MAX; ++i){
        for (int j=0; j<MAX; ++j){
            ans.m[i][j] = 0;
            for (int k=0; k<MAX; ++k){
                ans.m[i][j] += a.m[i][k] * b.m[k][j];
            }
            ans.m[i][j] %= MOD;
        }
    }
    return ans;
}

matrix fexpo(matrix b, i64 e){
    matrix ans;
    for (int i=MAX; i--;){
        for (int j=MAX; j--;){
            ans.m[i][j] = (i==j);
        }
    }
    for (; e; b=mult(b,b), e>>=1) if (e & 1LL) ans = mult(ans,b);
    return ans;
}

vi mask;
matrix t;

int main(){_
    for (int i=0; i<3; i++){
        for (int j=0; j<3; ++j){
            if (j==i) continue;
            for (int k=0; k<3; ++k){
                if (k==j) continue;
                mask.eb((1<<(6+i))|(1<<(3+j))|(1<<k));
            }
        }
    }

    for (int i=0; i<MAX; ++i){
        for (int j=0; j<MAX; ++j){
            t.m[i][j] = (!(mask[i] & mask[j]));// vai ser 1, se a coluna do tipo j pode vir depois da coluna do tipo i
        }
    }

    cin >> n;

    t = fexpo(t, n-1);

    i64 ans = 0;
    for (int i=0; i<MAX; ++i){
        for (int j=0; j<MAX; ++j){
            ans += t.m[i][j];
        }
    }
    ans %= MOD;
    
    cout << ans << endl;

    return 0;
}
