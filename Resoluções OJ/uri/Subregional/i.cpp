#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<9)
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

i64 dist[2][MAX][MAX][MAX], a, b, k, t, n, r, x, y;

struct planeta{
	int t;
	int ind;
};

int cmp(planeta a, planeta b){
	if (a.t != b.t) return a.t < b.t;
	return a.ind < b.ind;
}

planeta p;

int main(){_
	while (cin >> n >> r){
		for (int i=1; i<=n; ++i){
			cin >> p[i].t;
			p[i].ind = i;
		}

		sort(p, p+n, cmp);

		for (int i=1; i<=n; ++i){
			for (int j=1; j<=n; ++j){
				dist[0][i][j][0] = (i!=j) * INF;
				dist[1][i][j][0] = (i!=j) * INF;
			}
		}
		while (cin >> r){
			cin >> x >> y >> d;
			dist[0][x][y][0] = d;
			dist[0][y][x][0] = d;
			
			dist[1][x][y][0] = d;
			dist[1][y][x][0] = d;
		}

		for (int k=1; k<=n; ++k){
			for (int i=1; i<=n; ++i){
				for (int j=1; j<=n; ++j){
					dist[0][i][j][k] = min(dist[0][i][j][k-1], dist[0][i][k][k-1]+dist[0][k][j][k-1]);
					dist[1][i][j][k] = min(dist[1][i][j][k-1], dist[1][i][k][k-1]+dist[1][k][j][k-1]);
				}
			}
		}

		cin >> q;
		while (q--){
			cin >> a >> b >> k >> t;
		}
	}
	return 0;
}
