#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);

using namespace std;

int n, a[1000][1000], m;

int main(){_
    cin >> n >> m;
    for (int i=0; i<n; ++i){
        for (int i=0; i<m; ++i){
            cin >> a[i][j];
        }
    }
    return 0;
}

// complexdiade de tempo de execução é O(m*n+7)