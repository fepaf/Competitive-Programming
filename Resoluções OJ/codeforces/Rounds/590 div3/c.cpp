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
#define rep(i,a,b) for (int (i)=(a); (i)<=(b); ++(i))
#define repi(i,a,b) for (int (i)=(a); (i)>=(b); --(i))

using namespace std;

int n, q;
int tub[3][1<<19];
char c;
int vis[4][1<<18];
queue<ii> fila;

int dentro(int i, int j){return 1<=i && i<=2 && 1<=j && j <=n;}

vvi adj;

int main(){_
	for (cin >> q; q--;){
		cin >> n;
		rep(i,1,2){
			rep(j,1,n){
				cin >> c;
				tub[i][j] = c-'0';
				vis[i][j] = 0;
			}
		}
		
		
	}
	return 0;
}
