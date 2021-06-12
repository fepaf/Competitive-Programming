#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);

using namespace std;

int n, a[1000][1000], b[1000][1000], p[1000][1000], m;

int main(){_
    cin >> n;
    for (int i=0; i<n; ++i){
        for (int i=0; i<n; ++i){
            cin >> a[i][j];
        }
    }
    for (int i=0; i<n; ++i){
        for (int i=0; i<n; ++i){
            cin >> b[i][j];
        }
    }
    for (int i=0; i<n; ++i){
        for (int j=0; j<n; ++j){
            p[i][j] = 0;
            for (int k=0; k<n; ++k){
                p[i][j] += a[i][k]*b[k][j];                
            }
        }
    }
    for (int i=0; i<n; ++i){
        for (int i=0; i<n; ++i){
            cout << p[i][j] << ' ';
        }
        cout << endl;
    }
    
    return 0;
}

// complexdiade de tempo de execução é O(n*n*n+ 3*n*n+6)