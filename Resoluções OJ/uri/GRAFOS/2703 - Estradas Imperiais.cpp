// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Estradas Imperiais
// Nível: 9
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2703

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

int n, r, l;
int u, v, w;
int timer;
vvi up, mup;
vi tin, tout;

struct aresta{
	int u, v, w;
};
aresta a[MAX];

int pai[MAX];

vvii adj;

void init(int n){
	rep(i, 0, n) pai[i] = i;
}

int id(int u){return (pai[u] == u? pai[u] : (pai[u] = id(pai[u])));}

void join(int u, int v){
	u = id(u), v = id(v);
	pai[v] = u;
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

int is_anc(int u, int v){
	return (tin[u] <= tin[v]) && (tout[v] <= tout[u]);
}

int lca(int u, int v){
	if (is_anc(u, v)) return u;
	
	if (is_anc(v, u)) return v;

	repi(i, l, 0){
		if (!is_anc(up[u][i], v)){
			u = up[u][i];
		}
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
 
int mst;

int cmp(aresta a, aresta b){
	return a.w < b.w;
}

map<ii, int> peso;

int main(){_
	cin >> n >> r;
	
	init(n);

	rep(i, 0, r-1){
		cin >> u >> v >> w;
		--u, --v;
		a[i] = {u, v, w};
		peso[ii(u, v)] = w;
		peso[ii(v, u)] = w;
	}

	sort(a, a+r, cmp);
	
	mst = 0;
	adj = vvii(n);
	for (int i=0, j=1; i<r && j<n; ++i){
		u = id(a[i].u);
		v = id(a[i].v);
		w = a[i].w;
		
		if (u != v){
			mst += w;
			++j;
			
			u = a[i].u;
			v = a[i].v;
			
			adj[u].eb(v, w);
			adj[v].eb(u, w);
		}
	}

	l = ceil(log2(n));
	up.assign(n, vi(l+1));
	mup.assign(n, vi(l+1));
	tin = vi(n);
	tout = vi(n);
	timer = 0;

	dfs(0, 0, -INF);
	
	cout << "mst: " << mst << endl;
	int q;
	for (cin >> q; q--;){
		cin >> u >> v;
		--u, --v;
		int maior = get_max(u, v);
		cout << "maior " << maior << endl;
		cout << (mst + max(maior, peso[ii(u,v)]) - maior) << endl;
	}

	return 0;
}
