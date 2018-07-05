// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Soco do Rulk
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2151

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define INF 0x3f3f3f3f
#define pb push_back
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define vvii vector<vii>
#define vvi vector<vi>
#define fs first
#define sc second

using namespace std;

int c,m,n,x,y,caso,wall[1<<7][1<<7],lvl[1<<7][1<<7],i,j;
queue <int> fila;

inline int ton(int i, int j){
    return i*n+j;
}

inline int toi(int x){
    return x/n;
}

inline int toj(int x){
    return x%n;
}

int main(){_
    for (cin>>c; c--;){
        cin>>m>>n>>x>>y;
        for (int i=0;i<m;i++){
            for (int j=0;j<n;j++){
                cin>>wall[i][j];
                lvl[i][j]=0;
            }
        }
        fila.push(ton(x-1,y-1)); lvl[x-1][y-1]=10;
        while (!fila.empty()){
            int u = fila.front(); fila.pop();
            i = toi(u), j=toj(u);
            wall[i][j] += lvl[i][j];
            for (int di=-1;di<=1;di++){
                for (int dj=-1;dj<=1;dj++){
                    int a=i+di, b=j+dj;
                    if (!(di || dj)) continue;
                    if (-1<a && a<m && -1<b && b<n && !lvl[a][b]){
                        lvl[a][b]=lvl[i][j]-(lvl[i][j]!=1);
                        fila.push(ton(a,b));
                    }
                }
            }
        }
        cout<<"Parede "<<++caso<<":"<<endl;
        for (int i=0;i<m;i++){
            cout<<wall[i][0];
            for (int j=1;j<n;j++){
                cout<<' '<<wall[i][j];
            }
            cout<<endl;
        }
    }
    return 0;
}

