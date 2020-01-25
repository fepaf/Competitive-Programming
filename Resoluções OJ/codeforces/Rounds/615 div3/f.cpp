#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<18)
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

using namespace std;

int n, a, b, c, cdd, d, ans;
vvi adj;
int dist[MAX], ant[MAX], proib[MAX];
queue <int> fila;

int bfs(int s){
    for (int i=1; i<=n; ++i){
        dist[i] = INF; ant[i] = 0;
        if (proib[i]){
            fila.push(i);
            dist[i] = 0;
        }
    }
    fila.push(s), dist[s] = 0;
    int ans = s;
    while (!fila.empty()){
        int u = fila.front(); fila.pop();
        for (int v : adj[u]){
            if (dist[v] == INF && !proib[v]){
                dist[v] = dist[u] + 1;
                ant[v] = u;
                fila.push(v);
                if (dist[v] > dist[ans]) ans = v;
            }
        }
    }
    return ans;
}

int main(){_
    cin >> n;
    adj = vvi(n+1);
    for (int i=n-1; i--;){
        cin >> a >> b;
        adj[a].eb(b);
        adj[b].eb(a);
    }
    a = bfs(1);
    b = bfs(a);
    ans = dist[b];
    d = ant[b];
    for (int u=b; u; u=ant[u]){
        proib[u] = 1;
    }
    c = bfs(b);
    ans += dist[c];
    c = dist[c] ? c : d;
    cout << ans << endl << a << ' ' << b << ' ' << c << endl;
	return 0;
}
