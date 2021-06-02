#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define MAX 1010
#define pb push_back
#define vi vector<int>
#define vvi vector<vi>
#define sz(x) (int)(x).size()


using namespace std;

int n, m, comp; //dimensões a matriz
char a[MAX][MAX];
int vis[MAX][MAX];// vem tudo inicializado 0, nao visitado;
int cor[MAX][MAX];

int di[] = {-1,0,1,0}, dj[]={0,1,0,-1};

int dentro(int i, int j){
    return ((0<=i) && (i<=n-1) && (0<=j) && (j<=m-1));
}

void ff(int i, int j){
    // cout << i << ' ' << j <<  endl;

    vis[i][j] = 1;

    //área da lógica
    cor[i][j] = comp;

    for (int k=0; k<4; ++k){
        int u = i+di[k], v = j + dj[k];

        if (dentro(u,v) && !vis[u][v] && a[u][v]=='.'){
            ff(u, v);
        }
    }
}

// vvi vis;

int main(){_
    cin >> n >> m;

    // vis = vvi(n, vi(m, 0));

    for (int i=0; i<n; ++i){
        for (int j=0; j<m; ++j){
            cin >> a[i][j];
        }
    }

    for (int i=0; i<n; ++i){
        for (int j=0; j<m; ++j){
            if (!vis[i][j] && a[i][j]=='.'){
                ++comp;
                ff(i,j);
            }
        }
    }

    for (int i=0; i<n; ++i){
        for (int j=0; j<m; ++j){
            // cout << (char)(cor[i][j] ? cor[i][j]+'0' : ' ') << ' '; 
            cout << cor[i][j] << ' ';
        }
        cout <<  endl;
    }

    return 0;
}