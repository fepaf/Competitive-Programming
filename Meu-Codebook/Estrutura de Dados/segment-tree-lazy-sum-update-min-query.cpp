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

//#define left(x) ((x)<<1)
//#define right(x) (((x)<<1)+1)

using namespace std;

int n;
int a[MAX];
int tmin[MAX], lz[MAX];

int left(int x){return ((x)<<1);}

int right(int x){return left(x)+1;}

void push(int u, int tl, int tr){
	tmin[u] += lz[u];
	if (tl != tr){
		lz[left(u)] += lz[u];
		lz[right(u)] += lz[u];
	}
	lz[u] = 0;
}

void build(int u, int tl, int tr){
	if (tl == tr){
		tmin[u] = a[tl];
		lz[u] = 0;
		return;
	}
	int tm = ((tl + tr)>>1);
	build(left(u), tl, tm);
	build(right(u), tm+1, tr);

	tmin[u] = min(tmin[left(u)], tmin[right(u)]);
	lz[u] = 0;
}

void sum(int u, int tl, int tr, int l, int r, int val){
	push(u, tl, tr);
	if (tr < l || r < tl) return;
	if (l <= tl && tr <= r ){
		lz[u] += val;
		push(u, tl, tr);
	}
	else {
		int tm = ((tl + tr)>>1);
		sum(left(u), tl, tm, l, r, val);
		sum(right(u), tm+1, tr, l, r, val);
		tmin[u] = min(tmin[left(u)], tmin[right(u)]);
	}
}

int getmin(int u, int tl, int tr, int l, int r){
	push(u, tl, tr);
	if (tr < l || r < tl) return INF;	
	if (l <= tl && tr <= r ) return tmin[u];
	else {
		int tm = ((tl + tr)>>1);
		int lans = getmin(left(u), tl, tm, l, r);
		int rans = getmin(right(u), tm+1, tr, l, r);
		return min(lans, rans);
	}
}

void show(){
	rep(i,0,n-1){
		cout << getmin(1, 0, n-1, i, i) << ' ';
	}
	cout << endl;
}

int main(){_
	while (cin >> n){
		rep(i,0,n-1){
			cin >> a[i];
		}
		build(1, 0, n-1);
		
		show();
		string op;
		while ((cin>>op) && op!="fim"){
			if (op == "s"){
				int v, l, r;
				cin >> l >> r >> v;
				--l, --r;
				sum(1, 0, n-1, l, r, v);
				cout << ':' << getmin(1, 0, n-1, l, r) << endl;
			}
			else{
				int l, r;
				cin >> l >> r;
				--l, --r;
				cout << ':' << getmin(1, 0, n-1, l, r) << endl;
			}
			show();
		}
	}
	return 0;
}
