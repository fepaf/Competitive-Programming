#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#ifdef ONLINE_JUDGE
#define endl '\n'
#endif
#define INF (1LL<<60)
#define MAX (8000008)
#define OUT MAX
#define MOD 1000000007
#define i64 long long
#define all(x) (x).begin() , (x).end()
#define sz(x) (int)(x).size()
#define ii pair<i64, i64>
#define fs first
#define sc second
#define eb emplace_back
#define vi vector<i64>
#define vvi vector<vi>
#define vii vector<ii>
#define vvii vector<vii>
#define lsb(x) ((x) & (-x))
#define gcd(x,y) __gcd((x),(y))
#define esq(x) (x<<1)
#define dir(x) ((x<<1)|1)
#define W(x) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;

using namespace std;

i64 u, v, w, t;
i64 n, m, ans, maxd;
i64 a, b, c, d, dd;
vii g[MAX];
vi dist;

int vert(int a, int b, int c){
    return a*(40000)+b*200+c;
}

void dijkstra(int s){
    priority_queue<ii, vii, greater<ii>> pq;
    dist = vi(n+1, INF);

    dist[s] = 0;
    pq.push({0,s});

    while (!pq.empty()){
        int d = pq.top().fs , u = pq.top().sc;
        pq.pop();

        if (d > dist[u]) continue;

        for (auto [v, w] : g[u]){
            if (dist[u] + w < dist[v]){
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }
}

int main(){_
    n = 200*200*200;
    for (cin >> t; t--;){
        cin >> a >> b >> c >> d;
        for (i64 i=0; i<=a; ++i){
            for (i64 j=0; j<=b; ++j){
                for (i64 k=0; k<=c; ++k){
                    w = min(i, b-j);
                    g[vert(i,j,k)].eb(vert(i-w,j+w,k), w);

                    w = min(i, c-k);
                    g[vert(i,j,k)].eb(vert(i-w,j,k+w), w);

                    w = min(j, a-i);
                    g[vert(i,j,k)].eb(vert(i+w,j-w,k), w);

                    w = min(j, c-k);
                    g[vert(i,j,k)].eb(vert(i,j-w,k+w), w);

                    w = min(k, a-i);
                    g[vert(i,j,k)].eb(vert(i+w,j,k-w), w);

                    w = min(k, b-j);
                    g[vert(i,j,k)].eb(vert(i,j+w,k-w), w);
                }
            }
        }
        dijkstra(vert(0,0,c));

        ans = INF;
        maxd = -1;

        for (i64 i=0; i<=min(a,d); ++i){
            for (i64 j=0; j<=min(b,d); ++j){
                w = dist[vert(i,j,d)];
                if (w!=INF && w < ans){
                    maxd = max({i,j,d});
                    ans = w;
                }
            }
        }

        for (i64 i=0; i<=min(a,d); ++i){
            for (i64 k=0; k<=min(c,d); ++k){
                w = dist[vert(i,d,k)];
                if (w!=INF && w < ans){
                    maxd = max({i,d,k});
                    ans = w;
                }
            }
        }

        for (i64 j=0; j<=min(b,d); ++j){
            for (i64 k=0; k<=min(c,d); ++k){
                w = dist[vert(d,j,k)];
                if (w!=INF && w < ans){
                    maxd = max({d,j,k});
                    ans = w;
                }
            }
        }        

        for (i64 i=0; i<=min(a,d); ++i){
            for (i64 j=0; j<=min(b,d); ++j){
                for (i64 k=0; k<=min(c,d); ++k){
                    w = dist[vert(i,j,k)];
                    if (w!=INF && w <= ans){
                        maxd = max({i,j,k});
                        ans = w;
                    }
                }
            }
        }
        cout << ans << ' ' << maxd << endl;
    }

    return 0;
}
