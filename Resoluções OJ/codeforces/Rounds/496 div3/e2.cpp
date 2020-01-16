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

using namespace std;

int n,m;
int a[MAX];
int s[MAX];
map<int, int> f;
int x;
int reach;
i64 ans;

int main(){_
	cin >> n >> m;
	s[0] = 0; 
	f[0] = 1;
	for (int i=1; i<=n; ++i){
		cin >> a[i];
		if (a[i] < m) x=-1;
		else if (a[i] > m) x=1;
		else {
			x=0;
			reach=1;
		}

		s[i] = s[i-1]+x;

		if (reach){
			ans += f[s[i]] + f[s[i]-1];
		}
		else{
			f[s[i]]++;
		}
	}
	cout << ans << endl;
	return 0;
}
