#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<20)
#define i64 long long
#define all(x) (x).begin() , (x).end()
#define sz(x) (int)(x).size()
#define ii pair<i64, i64>
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

int n;
ii a[1<<10];

int main(){_
	while (cin >> n){
		rep(i,0,n){
			cin >> a[i].fs;
			a[i].sc = i+1;
		}	
		sort(a,a+n);
		i64 ans = 0;
		rep(i,0,n){
			ans += (a[n-1-i].fs*i + 1);
		}
		cout << ans << endl;
		rep(i,0,n){
			cout << a[n-1-i].sc << ' ';
		}
		cout << endl;
	}
	return 0;
}
