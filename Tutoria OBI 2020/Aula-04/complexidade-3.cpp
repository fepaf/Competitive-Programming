#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ii pair<int, int>
#define fs first
#define sc second
#define vi vector<int>
#define vii vector<ii>
#define eb emplace_back
#define pb push_back

using namespace std;

/*
complexidade cubica
*/
int n, m, a[1000][1000], b[1000][1000], ans[1000][1000];

int main(){_
    cin >> n;
    //lê primeira matriz
    for (int i=0; i<n; ++i){
        for (int j=0; j<n; j++){
            cin >> a[i][j];
        }
    }
    //lê segunda matriz
    for (int i=0; i<n; ++i){
        for (int j=0; j<n; j++){
            cin >> b[i][j];
        }
    }
    //faz multiplicação de matrizes
    for (int i=0; i<n; ++i){
        for (int j=0; j<n; j++){
            ans[i][j] = 0;
            for (int k=0; k<n; ++k){
                ans[i][j] += a[i][k]*b[k][j];
            }
        }
    }
    //imprime matriz produto
    for (int i=0; i<n; ++i){
        for (int j=0; j<n; j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}

/*
o(n*n + n*n + n*n*(n+1) + n*n + 1) = o(n**3)

*/
