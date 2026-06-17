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
#define int long long
#define all(x) (x).begin(), (x).end()


using namespace std;

/*
Versão enxuta de inverso modular, deduzida a partir 
da versão com algoritmo de euclides extendido
*/
int inv_mod(int a, int b){
    return (a > 1 ? b-inv_mod(b%a, a)*b/a : 1);
}

int m, r;
int n;

signed main(){_
    while (cin >> n >> m){
        cout << (gcd(n,m)==1 ? inv_mod(n,m) : -1) << endl;
    }
    return 0;        
}