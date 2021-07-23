#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#ifdef ONLINE_JUDGE
#define endl '\n'
#endif
#define INF 0x3f3f3f3f
#define MAX (1<<10)
#define OUT MAX
#define MOD 1000000007
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
#define esq(x) (x<<1)
#define dir(x) ((x<<1)|1)
#define W(x) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;

using namespace std;

int n, s, t;

/*
Quantidade minima de operações para transformar S em T
*/

queue<int> fila;
vi vis; // vis[x] diz se já coloquei x na fila em algum momento
vi dist; // dist[x] diz minimo de passos para transformar S em X

int valido(int x){
    return 1<=x && x<MAX;
}

int bfs(int s, int t){
    dist = vi(MAX, INF);
    vis = vi(MAX, 0);

    fila.push(s);
    vis[s] = 1;
    dist[s] = 0;

    while (!fila.empty()){
        int u = fila.front(); fila.pop();

        if (u == t){
            return dist[t];
        }

        int v = 2*u;
        if (valido(v) && !vis[v]){
            vis[v] = 1;
            fila.push(v);
            dist[v] = dist[u] + 1;
        }

        v = u+1;
        if (valido(v) && !vis[v]){
            vis[v] = 1;
            fila.push(v);
            dist[v] = dist[u] + 1;
        }
    }

    return dist[t];
}

int main(){_
    cin >> s >> t;
    cout << bfs(s,t) << endl;
    return 0;
}
