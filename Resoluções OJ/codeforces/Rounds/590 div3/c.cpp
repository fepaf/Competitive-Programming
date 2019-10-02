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
int tub[2][1<<19];
char c;

int dentro(int i, int j){return 0<=i && i<=1 && 0<=j && j <=n-1;}

int main(){_
	for (cin >> q; q--;){
		cin >> n;
		rep(i,0,1){
			rep(j,0,n-1){
				cin >> c;
				tub[i][j] = (c > '2');
			}
		}
		
		int i=0, j=0, jant=-1, esq;
		while ((i!=1 || j!=n) && dentro(i, j)){
			esq = j - jant;
			jant = j;
			if (tub[i][j]){
				if (esq) i^=1;
				else ++j;
			}
			else{
				if (esq) ++j;
				else break;
			}
		}
		
		cout << (i==1 && j==n ? "YES" : "NO") << endl;
	}
	return 0;
}
