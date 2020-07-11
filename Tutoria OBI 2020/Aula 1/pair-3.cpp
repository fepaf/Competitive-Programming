#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define sz(x) (int)(x).size()
#define fs first
#define sc second
#define pb push_back
#define eb emplace_back
#define ii pair<int, int>
#define vi vector<int>
#define vii vector<ii>
#define all(x) (x).begin(), (x).end()

using namespace std;

/*
Ler um N pares de (A,B), imprimir;
*/

ii par;
vii v;
int n, a, b;

int main(){_
    cin >> n;
    v = vii(n, {-1,-2});
    // for (auto &[a, b] : v){
    //     cin >> a >> b;
    // }
    // cout << endl;
    for (auto [a, b] : v){
        cout << a << " " << b << endl;
    }
    cout << endl;
    v.clear();
    return 0;
}