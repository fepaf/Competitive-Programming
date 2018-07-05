// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Picos do Átlas
// Nível: 5
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1599

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAX (1<<10)

using namespace std;

int n, m, high[MAX][MAX], picao, picos;

int dentro(int i, int j){
    return (1<=i && i<=n && 1<=j && j<=m);
}

int main(){_
    while (cin>>n>>m){
        for (int i=1;i<=n; i++){
            for (int j=1; j<=m; j++){
                cin>>high[i][j];
            }
        }
        picos = 0;
        for (int i=1;i<=n; i++){
            for (int j=1; j<=m; j++){
                picao = 1;
                for (int di=-1; di<=1; di++){
                    for (int dj=-1; dj<=1; dj++){
                        if (!(di || dj)) continue;
                        int a = i + di, b = j + dj;
                        if (dentro(a,b)){
                            picao &= (high[i][j] > high[a][b]);
                        }
                    }
                }
                if (picao){
                    cout<<i<<" "<<j<<endl;
                    ++picos;
                }
            }
        }
        if (!picos){
            cout<<-1<<endl;
        }
        cout<<endl;
    }
}

