#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define sz(x) (int)(x).size()
#define pb push_back
#define eb emplace_back
#define vi vector<int>

using namespace std;

vi v;
int n, x;

int main(){_
    cin >> n;
    v = vi(n, -1);
    for (int i=0; i<n; ++i){
        cout << v[i] << ' ';
    }
    cout << endl;
    for (int i=0; i<n; ++i){
        cin >> v[i];
    }
    cout << "Tamanho: " << sz(v) << endl;
    for (int i=0; i<n; ++i){
        cout << v[i] << ' ';
    }
    cout << endl;
    return 0;
}