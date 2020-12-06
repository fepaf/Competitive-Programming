#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAX (1<<17)

using namespace std;

int n, m, r, p[2][MAX], j;

int main(){_

    cin >> n >> m >> r;
    for (int i=0; i<n; ++i){
        cin >> p[0][i];
    }

    sort(p[0], p[0]+n, greater<int>());

    if ((r&1)==0){
        for (int i=0; i<n; ++i){
            cout << p[0][i] << ' ';
        }
        cout << endl;
        return 0;
    }

    for (int i=0; i<m; ++i){
        j=n-1;
        for(; i>=p[0][j] && j>=0; --j);
        cout << j+1 << ' ';
    }
    cout <<  endl;

    return 0;
}