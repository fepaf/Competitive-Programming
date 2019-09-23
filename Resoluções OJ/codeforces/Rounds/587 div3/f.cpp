#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<20)
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
#define rep(i,a,b) for (int (i)=(a); (i)<(b); ++(i))
#define repi(i,a,b) for (int (i)=(a); (i)>(b); --(i))

using namespace std;

 i64 dp[MAX];
int n, k, prox;
string s;


int main(){_
	while (cin >> n >> k >> s){
		memset(dp, 0x7f, sizeof(dp));
		int atual = INF;
		repi(i,n-1,-k-1){
			if (i>=0 && s[i]=='1'){
				atual = i;
			}
			if (i+k < n){
				prox[i+k] = atual;
			}
		}
		dp[n] = 0LL;
		repi(i,n-1,-1){
			if (prox[i]-i <= k){
				int y = 
			}
			dp[i] = min(dp[i], dp[i+1] + i);
		}
		cout << dp[0] << endl;
	}
	return 0;
}
