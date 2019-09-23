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

i64 nivel[1<<6], n, q, k, x, pot10[20];

int main(){_
	pot10[0] = 1;
	rep (i,1,18){
		nivel[i] = nivel[i-1]+9*i*pot10[i-1];
		pot10[i] = pot10[i-1]*10;
	}
	while (cin >> q){
		while (q--){
			cin >> k;
			i64 l = (upper_bound(nivel, nivel+17, k) - nivel);
			i64 d = k - nivel[l-1];
			n = d/l + pot10[l-1] - 1;
			i64 r = d%l;
			if (r){
				n++;
				rep(i,0,l-r){
					n /= 10;
				}
			}
			cout << (n%10) << endl;
		}
		cout << endl;
	}
	return 0;
}
