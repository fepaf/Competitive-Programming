#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX 10007
#define i64 long long
#define all(x) (x).begin() , (x).end()
#define ii pair<int, int>
#define sz(x) (int)(x).size()
#define fs first
#define sc second
#define eb emplace_back
#define vi vector<int>
#define vvi vector<vi>
#define vii vector<ii>
#define vvii vector<vii>
#define lsb(x) ((x) & (-x))

using namespace std;

string n,m,k;
int x,y,ans;

int main(){_
	while (cin >> k >> x >> y >> n){
		ans = 0;
		
		m=n;
		for(int i=sz(n); i--;){
			n[sz(n)-1-i] = m[i];
		}
		
		
		for (int i=0; i<x; ++i){
			if (i!=y){
				ans += (n[i] == '1');
			}
			else {
				ans += (n[i] == '0');
			}
		}
		cout << ans << endl;
	}
	return 0;
}
