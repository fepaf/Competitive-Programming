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

struct rect{
	int l, r, d, t;
};

int inside(rect a, rect b){
	return (b.l <= a.l && a.r <= b.r && b.d <= a.d && a.t <= b.t);
}

int valido(rect a){
	return (a.l <= a.r && a.d <= a.t);
}

rect w, b1, b2, iv, ih, ib;

int main(){_
	while (cin >> w.l >> w.d >> w.r >> w.t){
		cin >> b1.l >> b1.d >> b1.r >> b1.t;
		cin >> b2.l >> b2.d >> b2.r >> b2.t;

		iv = {max(b1.l, b2.l), min(b1.r, b2.r), min(b1.d, b2.d), max(b1.t, b2.t)};
		ih = {min(b1.l, b2.l), max(b1.r, b2.r), max(b1.d, b2.d), min(b1.t, b2.t)};
		ib = {max(b1.l, b2.l), min(b1.r, b2.r), max(b1.d, b2.d), min(b1.t, b2.t)};

		if (inside(w, b1)){
			cout << "NO" << endl;
		}
		else if(inside(w, b2)){
			cout << "NO" << endl;
		}
		else if (valido(ib) && valido(iv) && inside(w, iv)){
			cout << "NO" << endl;
		}
		else if (valido(ib) && valido(ih) && inside(w, ih)){
			cout << "NO" << endl;
		}
		else{
			cout << "YES" << endl;
		}
	}
	return 0;
}
