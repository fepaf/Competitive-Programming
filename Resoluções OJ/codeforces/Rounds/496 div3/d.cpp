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

int n, ans, d;
char c;
int s; 
int f[3];
string str;

int main(){_
    cin >> str;
	s = ans = 0;
	f[0] = 1;;
	n=sz(str);
	for (int i=1; i<=n; ++i){
		d = (str[i-1]-'0')%3;
		s = (s+d)%3;
		if ((++f[s])==2){
			f[0] = f[1] = f[2] = 0;
			f[s] = 1;
			++ans;
		}
	}

	cout << ans << endl;

	return 0;
}
