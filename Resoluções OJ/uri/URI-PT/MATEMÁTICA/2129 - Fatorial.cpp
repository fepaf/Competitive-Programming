// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Fatorial
// Nível: 3
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2129

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

ll n,k;
ll d[]={1,1,2,6,4,2,2,4,2,8};

ll f(ll n){
    if (n<10) return d[n];
    return (f(n/5)*f(n%10)*(6-((((n/10)%10)&1)<<1)))%10;
}

int main(){_
    while (cin>>n){
        cout<<"Instancia "<<++k<<endl<<f(n)<<endl<<endl;
    }
    return 0;
}

