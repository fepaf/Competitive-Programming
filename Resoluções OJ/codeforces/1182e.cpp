#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (5)
#define MOD 1000000007
#define i64 unsigned long long
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

struct matrix{
    i64 m[MAX][MAX];
};

matrix mult(matrix a, matrix b){
    matrix ans;

    for (int i=0; i<MAX; ++i){
        for (int j=0; j<MAX; ++j){
            ans.m[i][j] = 0;
            for (int k=0; k<MAX; ++k){
                ans.m[i][j] += (a.m[i][k]*b.m[k][j]);
            }
            ans.m[i][j] %= (MOD-1);
        }
    }

    return ans;
}

matrix fpowm(matrix b, i64 e){
    matrix ans;

    for (int i=MAX; i--;){
    	for (int j=MAX; j--;){
        	ans.m[i][j] = (i==j);
		}
    }
    
    for (; e; b=mult(b, b), e>>=1) if (e & 1LL) ans = mult(ans, b);

    return ans;
}

i64 fpow(i64 b, i64 e){
    i64 ans;

    for (ans=1LL; e; b=(b*b)%MOD, e>>=1) if (e&1LL) ans = (ans*b)%MOD;

    return ans;
}

matrix t, inicial;

i64 n, c, f1, f2, f3;

int main(){_
    inicial = {{{1, 0, 0, 0, 0}, 
                {0, 1, 0, 0, 0}, 
                {0, 0, 1, 0, 0}, 
                {0, 0, 0, 1, 0}, 
                {0, 0, 0, 1, 0}}};

    t =   {{{1, 1, 1, 2, 0}, 
            {1, 0, 0, 0, 0}, 
            {0, 1, 0, 0, 0}, 
            {0, 0, 0, 1, 1}, 
            {0, 0, 0, 0, 1}}};

    cin >> n >> f1 >> f2 >> f3 >> c;
    t = fpowm(t, n-3);
    t = mult(t, inicial);

    i64 ans = fpow(c, t.m[0][3]);
    ans = (ans * fpow(f3, t.m[0][0])) % MOD;
    ans = (ans * fpow(f2, t.m[0][1])) % MOD;
    ans = (ans * fpow(f1, t.m[0][2])) % MOD;
    cout << ans << endl;
	return 0;
}
