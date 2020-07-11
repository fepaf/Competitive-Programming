#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define sz(x) (int)(x).size()
#define fs first
#define sc second
#define pb push_back
#define eb emplace_back
#define vi vector<int>
#define all(x) (x).begin(), (x).end()

using namespace std;

/*
Ler um N pares de (A,B), imprimir;
*/

pair<int, int> par;
vector< pair<int, int> > v;
int n, a, b;

int main(){_
    cin >> n;

    for (int i=0; i<n; ++i){
        cin >> a >> b;
        // v.pb({a, b});
        v.eb(a, b);
    }
    cout << endl;
    for (int i=0; i<n; ++i){
        cout << v[i].fs << ' ' << v[i].sc << endl;
    }
    cout << endl;
    v.clear();
    return 0;
}