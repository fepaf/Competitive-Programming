// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Matriz Quadrada I
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1435

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define UNVISITED -1
#define VISITED 1
#define i64 long long
#define vi vector<int>
#define vvi vector<vi>
#define eb emplace_back

using namespace std;

int n;
vvi m;

int main(){_
    while ((cin>>n)&&n){
        m = vvi(n,vi(n,0));
        for (int k=0; k<=n/2; k++){
            for (int i=k;i<n-k;i++){
                for (int j=k;j<n-k;j++){
                    ++m[i][j];
                }
            }
        }
        for (int i=0;i<n;i++){
            cout<<setw(3)<<m[i][0];
            for (int j=1;j<n;j++){
                cout<<setw(4)<<m[i][j];
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}

