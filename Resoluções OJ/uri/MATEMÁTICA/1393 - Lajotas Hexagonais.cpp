// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Lajotas Hexagonais
// Nível: 2
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1393

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAX 102
#define EPS (1e-7)
#define MOD 1000000007
#define UNVISITED -1
#define VISITED 1
#define ull unsigned long long
#define ll long long
#define ii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vl vector<ll>
#define vvi vector<vi>
#define vii vector<ii>
#define vd vector<double>
#define qi queue<int>
#define fs first
#define sc second
#define pb push_back

using namespace std;

ll f[41],n;

int main(){_
    f[0]=1, f[1]=1;
    for (int i=2;i<=40;i++) f[i]=f[i-1]+f[i-2];
    while ((cin>>n)&&n){
        cout<<f[n]<<endl;
    }
    return 0;
}

