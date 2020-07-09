#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (100123)
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

using namespace std;

i64 a[MAX];

i64 t[4*MAX], lazy[4*MAX], n;

void push(int v, int tl, int tr){
	if (lazy[v]){
		t[v] += (tr-tl+1)*lazy[v];
		if (tl != tr){
			lazy[2*v] += lazy[v];
			lazy[2*v+1] += lazy[v];
		}
	}
	lazy[v] = 0;
}

void build(int v, int tl, int tr){
	if (tl == tr){
		t[v] = 0;
		lazy[v] = 0;
	}
	else {
		int tm = (tl + tr)/2;
		build(2*v, tl, tm);
		build(2*v + 1, tm + 1, tr);
		t[v] = t[2*v] + t[2*v+1];
		lazy[v] = 0;
	}
}

i64 sum(int v, int tl, int tr, int l, int r){
	push(v,tl,tr);
	if (l > r)
		return 0;
	if (l == tl && r == tr)
		return t[v];
	int tm = (tl + tr)/2;
	return sum(2*v, tl, tm, l, min(r, tm)) + sum(2*v+1, tm+1, tr, max(l, tm+1), r);
}

void update(int v, int tl, int tr, int l, int r, i64 val){
	push(v,tl,tr);
	if (l > r)
		return;
	if (l == tl && r == tr){
		lazy[v] += val;
		push(v,tl,tr);
	}
	else {
		int tm=(tl+tr)/2;
		update(2*v, tl, tm, l, min(r,tm), val);
		update(2*v+1, tm+1, tr, max(tm+1,l), r, val);
		t[v] = t[2*v] + t[2*v+1];
	}
}


signed main(){_
	int t, c;
	for (cin >> t; t--;){
		cin >> n >> c;
		build(1, 0, n-1);
		int cmd, p, q;
		i64 v;
		while (c--){
			cin >> cmd;
			if (cmd == 0){
				cin >> p >> q >> v;
				update(1, 0, n-1, p-1, q-1, v);
			}
			else {
				cin >> p >> q;
				cout << sum(1, 0, n-1, p-1, q-1) << endl;
			}
		}
	}
	return 0;
}
