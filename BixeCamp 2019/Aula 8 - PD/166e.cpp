#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<2)
#define MOD (1000000007)
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
#define rep(i,a,b) for (int (i)=(a); (i)<=(b); ++(i))
#define repi(i,a,b) for (int (i)=(a); (i)>=(b); --(i))

using namespace std;

struct matriz{
	i64 m[MAX][MAX];
};

matriz identidade(){
	matriz id;
	for (int i=MAX; i--;){
		for (int j=MAX; j--;){
			id.m[i][j] = (i==j);
		}
	}
	return id;
}

matriz  mult(matriz a, matriz b){
	matriz ans;

	for (int i=0; i<MAX; ++i){
		for (int j=0; j<MAX; ++j){
			ans.m[i][j] = 0;
			for (int k=0; k<MAX; ++k){
				ans.m[i][j] += (a.m[i][k] * b.m[k][j]);
			}
			ans.m[i][j] %= MOD;
		}
	}

	return ans;
}

matriz fexpo(matriz b, i64 e){
    matriz ans = identidade();
    for (; e; b=mult(b,b), e>>=1) if (e&1LL) ans = mult(ans, b);
    return ans;
}

matriz t;
i64 n;

int main(){_
    t = {{{0,1,1,1}, {1,0,1,1}, {1,1,0,1}, {1,1,1,0}}};
    cin >> n;
    t = fexpo(t, n);
    cout << t.m[3][3] << endl;
	return 0;
}
