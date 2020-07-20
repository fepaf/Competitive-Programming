#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define sz(x) (int)(x).size()
#define pb push_back
#define eb emplace_back

using namespace std;

vector<int> v;
int n, x;

int main(){_
    cin >> n;
    for (int i=0; i<n; ++i){
        cin >> x;
        v.pb(x);
    }
    cout << "Tamanho: " << sz(v) << endl;
    for (int i=0; i<n; ++i){
        cout << v[i] << ' ';
    }
    cout << endl;
    return 0;
}