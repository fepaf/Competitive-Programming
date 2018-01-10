#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define INF 0x3f3f3f3f
#define MAX (1<<7)
#define i64 long long

using namespace std;

i64 n, x, y, r, c, a1, a2, ans;
double dist[MAX][MAX], d;

struct Antena{
    i64 x, y, r;
};

Antena antenas[MAX];

int main(){_
    while ((cin>>n)&&n){
        for (int i=1; i<=n; i++){
            cin>>antenas[i].x>>antenas[i].y>>antenas[i].r;
        }

        for (int i=1; i<=n; i++){
            int xa = antenas[i].x, ya = antenas[i].y, ra = antenas[i].r;
            for (int j=1; j<=n; j++){
                int xb = antenas[j].x, yb = antenas[j].y;
                d = hypot((xa-xb),(ya-yb));
                dist[i][j] = (d <= ra ? d : INF);
            }
        }

        for (int k=1; k<=n; k++){
            for (int i=1; i<=n; i++){
                for (int j=1; j<=n; j++){
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                }
            }
        }

        for (cin>>c; c--;){
            cin>>a1>>a2;
            ans = dist[a1][a2];
            cout<<(ans != INF ? (ans) : -1)<<endl;
        }
    }
    return 0;
}
