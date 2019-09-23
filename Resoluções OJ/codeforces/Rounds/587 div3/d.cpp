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

using namespace std;

i64 n, x, y, z, maior, a[MAX];

int main(){_
	while (cin >> n){
		x = 0;
		rep(i,0,n){
			cin >> a[i];
			x = max(x, a[i]);
		}
		z = y = 0;
		rep(i,0,n){
			z = gcd(z, x-a[i]);
		}
		rep(i,0,n){
			y += (x-a[i])/z;
		}
		cout << y << ' ' << z << endl;
	}
	return 0;
}
