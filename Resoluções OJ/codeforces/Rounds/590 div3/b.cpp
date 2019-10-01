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

int n, k, id;
deque<int> screen;
set<int> vis;


int main(){_
	cin >> n >> k;
	rep(i, 1, n){
		cin >> id;
		if(vis.find(id)==vis.end() && sz(vis) < k){
			screen.push_front(id);
			vis.insert(id);
		}
		else if (vis.find(id)==vis.end()){
			vis.erase(vis.find(screen.back()));
			screen.pop_back();
			screen.push_front(id);
			vis.insert(id);
		}
	}

	cout << sz(screen) << endl;
	for (auto x : screen){
		cout << x << ' ';
	}

	cout << endl;
	return 0;
}
