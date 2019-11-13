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

int ehprimo(int n){
	if ((n<5) || (n%2==0) || (n%3==0)) return ((n==2) || (n==3));
	for (int i=5; i*i<=n; i+=6){
		if (n%i==0 || n%(i+2)==0) return 0;
	}
	return 1;
}

int x;

int main(){_
	cin >> x;
	cout << (ehprimo(x) ? 'S' : 'N') << endl;
	return 0;
}
