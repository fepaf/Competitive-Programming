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
complexidade quadratico
*/
int n, m, a[1000][1000];

int main(){_
    cin >> n >> m;
    for (int i=0; i<n; ++i){
        for (int j=0; j<n; j++){
            cin >> a[i][j];
        }
    }
    for (int i=0; i<n; ++i){
        cin >> m;
        cout << m << endl;
    }
    
    return 0;
}

/*
o(2 + n*n*1 + n*2 +1 ) - > o(n**2 + 2*n + 3)  -> o(N**2)
*/
