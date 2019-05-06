#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX 100123
#define i64 long long
#define all(x) (x).begin() , (x).end()
#define eb emplace_back
#define vi vector<int>
#define sz(x) (int)(x).size()
#define fs first
#define sc second

using namespace std;

vi a;
string op;
int x;

int find(vi a, int x){
	int lo = 0, hi = sz(a);
	while (lo < hi){
		int mid = lo + (hi-lo)/2;
		if (a[mid]>x) hi = mid;
		else lo = mid+1;
	}
	return lo;
}

int main(){_
	cout << "comecou " << endl;
	while (1){
		cin >> op;
		if (op == "add"){
			cin >> x;
			a.eb(x);
			sort(all(a));
		}
		else if (op == "upper"){
			cin >> x;
			cout << (upper_bound(all(a) , x)-a.begin()) << endl;
		}
		else if (op == "bb"){
			cin >> x;
			cout << find(a,x) << endl;
		}
	}
	return 0;
}
