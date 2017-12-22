// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Equações Diofantinas
// Nível: 5
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1381

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAX 1000009
#define EPS (1e-7)
#define MOD 1300031
#define UNVISITED -1
#define VISITED 1
#define ull unsigned long long
#define ll long long
#define ii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vvi vector<vi>
#define vii vector<ii>
#define vd vector<double>
#define qi queue<int>
#define fs first
#define sc second
#define pb push_back

using namespace std;

pll inv_m(int a, int b){
    if (b==0) return pll(1,0);
    pll p = inv_m(b,a%b);
    return pll(p.sc, p.fs-(a/b)*p.sc);
}

ll inv_mod(int a, int b){
    pll p = inv_m(a,b);
    return ((p.fs%b)+b)%b;
}

ll n, c, fat[2*MAX], t;

int main(){_

    fat[0]=1;
    for (int i=1; i<=2*MAX; i++) fat[i]=(fat[i-1]*i)%MOD;

    for (cin>>t;t--;){
        cin>>n>>c;
        cout<<(fat[c+n-1]*((inv_mod(fat[c],MOD)*inv_mod(fat[n-1],MOD))%MOD))%MOD<<endl;
    }
    return 0;
}

