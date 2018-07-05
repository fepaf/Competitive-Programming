// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Produto do Intervalo
// Nível: 5
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1301

#include <bits/stdc++.h>

using namespace std;

int n;
vector <int> a;

template <typename T>
class SegmentTree
{
private:
	vector <T> tree;
	vector <T>& a;
	const int off = 101;

	int left(int x)  { return (x << 1); };
	int right(int x) { return (x << 1) + 1; };
	int mid(int a, int b) { return ((a + b) >> 1); };
	T operation(T a, T b) {
		// change here
		return (!(a && b) ? 0 : (a / abs(a)) * (b / abs(b)));
	}

	T build(int u, int l, int r) {
		if (l == r) return tree[u] = a[l];

		build(left(u), l, mid(l, r));
		build(right(u), mid(l, r) + 1, r);

		return tree[u] = operation(tree[left(u)], tree[right(u)]);
	}

	T query(int u, int i, int j, int l, int r) {
		if (r < i || l > j) return off;

		if (l <= i && j <= r) return tree[u];

		T lans = query(left(u), i, mid(i, j), l, r);
		T rans = query(right(u), mid(i, j) + 1, j, l, r);

		if (lans == off) return rans;
		if (rans == off) return lans;
		return operation(lans, rans);
	}

	int update(int u, int i, int j, int index, T value) {
		if (index < i || index > j) return off;

		if (i == j) return tree[u]=value;

		update(left(u), i, mid(i, j), index, value);
		update(right(u), mid(i, j) + 1, j, index, value);

		return (tree[u] = operation(tree[left(u)], tree[right(u)]));
	}

public:
	SegmentTree(vector <T>& a) : a(a) {
		this->tree = vector <T>(4 * (int)a.size(), -1);
		build(1, 0, (int)a.size() - 1);
	}

	T query(int l, int r) {
		if (l > r) swap(l, r);
		return query(1, 0, (int)this->a.size() - 1, l, r);
	}

	void update(int i, T x) {
		this->a[i] = x;
		update(1, 0, (int)this->a.size() - 1, i, x);
	}

	void show() {
		cout << endl;
		for (int i = 0; i < (int)this->a.size(); i++)
			cout << setw(3) << i;
		cout << endl;
		for (int i = 0; i < (int)this->a.size(); i++)
			cout << setw(3) << this->a[i];
		cout << endl;
	}
};

int k;

int main()
{
	while (cin >> n >> k){
		a = vector <int>(n);
		for (int i = 0; i < n; i++) cin >> a[i];

		SegmentTree <int> st(a);

		int l, r, x, i;
		string o;
		while (k--)
		{
			cin >> o;
			if (o=="P"){
				cin >> l >> r;
				int ans = st.query(l-1, r-1);
				cout << (!ans ? '0' : (ans > 0 ? '+' : '-'));
			}
			else {
				cin >> i >> x;
				st.update(i-1, x);
			}
		}
		cout<<endl;
	}
	return 0;
}

