// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Entregadores de Steak
// Nível: 2
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2046

#include<bits/stdc++.h>
#define INF 0x3f3f3f3f
#define ii pair<int,int>
#define vi vector<int>
#define vvi vector<vi>
#define vii vector<ii>
#define vvii vector<vii>
#define vvvi vector<vvi>
#define eb emplace_back
#define fs first
#define sc second
#define pos(i,j) (i)*n+(j)
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int m,n,k,x,y,l,a,b,caso,d[]={-1,0,1,0};
queue<ii> fila;
vvi dist;
vvii best;
vii xy;

int main(){_
    while ((cin>>m>>n)&&(m||n)){
        dist = vvi(m+1,vi(n+1,INF)); best = vvii(m+1,vii(n+1,ii(INF, INF)));
        for (cin>>k;k--;){
            cin>>x>>y;
            xy.eb(x,y);
        }
        sort(xy.begin(), xy.end());
        for (auto par : xy){
            x = par.fs , y = par.sc;
            fila.push(ii(x,y));
            dist[x][y] = 0;
            best[x][y] = ii(x,y);
        }


        while (!fila.empty()){
            ii front = fila.front(); fila.pop();
            x = front.fs , y = front.sc;
            for (int k=4;k--;){
                a = x + d[k] , b = y + d[3-k];

                if (a<1 || a>m || b<1 || b>n) continue;

                if (dist[a][b] == INF){
                    dist[a][b] = dist[x][y] + 1;
                    fila.push(ii(a,b));
                    best[a][b] = best[x][y];
                }
                /*else if (dist[a][b] == dist[x][y] + 1){
                    if (x != a){
                        best[a][b] = (x <= a ? best[x][y] : best[a][b]);
                    }
                    else if (y != b){
                        best[a][b] = (y <= b ? best[x][y] : best[a][b]);
                    }
                }*/
            }
        }

        /*for (int i=1; i<=m; i++){
            for (int j=1; j<=n; j++){
                cout<<"("<<best[i][j].fs<<","<<best[i][j].sc<<"):"<<dist[i][j]<<"  ";
            }
            cout<<endl;
        }*/
        if (caso) cout<<endl;
        cout<<"Instancia "<<++caso<<endl;
        for (cin>>l; l--;){
            cin>>x>>y;
            cout<<best[x][y].fs<<" "<<best[x][y].sc<<endl;
        }
        xy.clear();
    }
    return 0;
}

