// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Tapioca e a Chuva de Trufas
// Nível: 4
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1927

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAXX (1<<5)
#define MAXY MAXX
#define MAXT (1<<10)


using namespace std;


int n, x, y, t, a[MAXX][MAXY][MAXT], memo[MAXX][MAXY][MAXT], d[]={-1,0,1,0};

int f(int x, int y, int t){
    if (t > 1000) return 0;
    if (x<0 || x > 20 || y<0 || y > 20) return 0;

    if (~memo[x][y][t]) return memo[x][y][t];

    int ans = f(x,y,t+1);

    for (int i=4; i--;){
        ans = max(ans, f(x+d[i], y+d[3-i], t+1));
    }

    ans += a[x][y][t];

    return memo[x][y][t] = ans;
}

int main(){_
    while (cin >> n){
        for (int i=MAXX; i--;){
            for (int j=MAXY; j--;){
                for (int k=MAXT; k--;){
                    a[i][j][k] = 0;
                    memo[i][j][k] = -1;
                }
            }
        }

        while (n--){
            cin >> x >> y >> t;
            a[x][y][t] ++;
        }

        cout << f(6,6,0) << endl;
    }
    return 0;
}

