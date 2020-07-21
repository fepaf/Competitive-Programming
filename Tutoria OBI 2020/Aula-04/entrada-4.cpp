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
Entrada até flag, geralmente todos são 0
*/
int v[1000], t, ans, n, m, caso;

int main(){_
    
    while ((cin >> n >> m) && (n || m)){
        for (int i=0; i<n; ++i){
            cin >> v[i];
        }
        cout << "Caso " << ++caso << ":" << endl;
        cout << ans << endl;
    }

    return 0;
}
