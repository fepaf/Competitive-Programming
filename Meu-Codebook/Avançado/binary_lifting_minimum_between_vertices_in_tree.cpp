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

vi tin, tout;
vvi up, mup;
int n, m, u, v, w, l, timer;

vvii adj;

int is_anc(int u, int v){
	return tin[u] <= tin[v] && tout[v] <= tout[u];
}

void dfs(int u, int p, int w){
	tin[u] = ++timer;

	up[u][0] = p;
	mup[u][0] = w; 
	rep(i, 1, l){
		up[u][i] = up[up[u][i-1]][i-1];
		mup[u][i] = max(mup[u][i-1], mup[up[u][i-1]][i-1]);
	}

	int v;
	for (auto vw : adj[u]){
		v = vw.fs, w = vw.sc;
		if (v != p) dfs(v, u, w);
	}

	tout[u] = ++timer;
}

int lca(int u, int v){
	if (is_anc(u, v)) return u;
	
	if (is_anc(v, u)) return v;
	
	repi(i, l, 0){
		if (!is_anc(up[u][i], v))
			u = up[u][i];
	}
	
	return up[u][0];
}

int sobe(int u, int v){
	int maior = -INF; 
	
	repi(i, l, 0){
		if (!is_anc(up[u][i], v)){
			maior = max(maior, mup[u][i]);
			u = up[u][i];
		}
	}
	return max(maior, mup[u][0]);
}

int get_max(int u, int v){
	if (u == v) return 0;// importante

	if (is_anc(u, v)) return sobe(v, u);
	
	if (is_anc(v, u)) return sobe(u, v);
	
	return max(sobe(u, lca(u,v)), sobe(v, lca(u,v)));
}

int main(){_
	cin >> n >> m;
	
	l = ceil(log2(n));
	up.assign(n, vi(l+1));
	mup.assign(n, vi(l+1));

	adj = vvii(n);

	rep(i,1,m){
		cin >> u >> v >> w;
		adj[u-1].eb(v-1, w);
		adj[v-1].eb(u-1, w);
	}

	timer = 0;
	tin = vi(n);
	tout = vi(n);
	
	dfs(5, 5, -INF);

	while (cin >> u >> v){
		cout << u << ' '<< v << endl;
		cout << ':' << lca(u-1, v-1)+1 << " >> " << get_max(u-1, v-1) << endl;
	}

	return 0;
}
