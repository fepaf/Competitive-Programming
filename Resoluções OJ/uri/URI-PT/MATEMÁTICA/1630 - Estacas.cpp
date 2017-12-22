// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Estacas
// Nível: 4
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1630

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define INF 0x3f3f3f3f3f
#define ii pair<ll,int>
#define vi vector<ll>
#define vvi vector<vi>
#define eb emplace_back
#define fs first
#define sc second
#define ll long long
#define MAX (1<<10)

using namespace std;

ll x, y;

int main(){_
    while (cin>>x>>y){
        cout<<(((x+y)/__gcd(x,y))<<1)<<endl;
    }
    return 0;
}

