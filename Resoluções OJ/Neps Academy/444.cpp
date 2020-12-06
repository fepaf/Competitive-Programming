#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAX 401
#define INF (0x3f3f3f3f)
#define i64 long long
#define ii pair<int, int>
#define vii vector<ii>
#define vi vector<int>
#define vvi vector<vi>
#define eb emplace_back
#define fs first
#define sc second

using namespace std;

struct consulta{
    int x, y, t, ans;
};

vvi ids;
vector<consulta> qry;
int n, r, x, y, d, a, b, k, t, q, z;
int dist[MAX][MAX], adj[MAX][MAX];
vii it;
set<int> seen;

void fw(int pass){
    pass ? sort(it.begin(), it.end(), greater<ii>()) : sort(it.begin(), it.end());

    for (int i=1; i<=n; ++i){
        for (int j=1; j<=n; ++j){
            dist[i][j] = adj[i][j];
        }
    }

    int idx = 1, ant = it[0].fs;
    for (int k=1; k<=n; ++k){
        x = it[k-1].sc;
        y = it[k-1].fs;
        for (int i=1; i<=n; ++i){
            for (int j=1; j<=n; ++j){
                dist[i][j] = min(dist[i][j], dist[i][x]+dist[x][j]);
            }
        }
        if (y != ant || k==n){
            for (auto q : ids[idx]){  
                qry[q].ans = (dist[qry[q].x][qry[q].y]!=INF && qry[q].t==pass ? dist[qry[q].x][qry[q].y] : qry[q].ans);
            }
            ++idx;
            ant = y;
        }
    }
}

int main(){_
    cin >> n >> r;

    for (int i=1; i<=n; ++i){
        cin >> t;
        it.eb(t,i);
    }

    for (int i=1; i<=n; ++i){
        for (int j=1; j<=n; ++j){
            adj[i][j] = ((i!=j)*INF);
        }
    }

    while (r--){
        cin >> x >> y >> d;

        adj[x][y] = min(adj[x][y], d);
        adj[y][x] = min(adj[y][x], d);
    }

    ids = vvi(n+1);

    cin >> q;
    
    qry = vector<consulta>(q);

    for (int i=0; i<q; ++i){
        cin >> a >> b >> k >> t;
        qry[i]={a,b,t,-1};
        ids[k].eb(i);
    }

    fw(0);

    fw(1);

    for (auto [x, y, t, ans] : qry){
        cout << ans << endl;
    }

    return 0;
}