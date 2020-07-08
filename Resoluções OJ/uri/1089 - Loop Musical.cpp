// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Loop Musical
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1089

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAX 1002
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
#define vs vector<string>
#define qi queue<int>
#define fs first
#define sc second
#define pb push_back
#define mp make_pair

using namespace std;

int n,ant,ans;
vi h;

int sinal(int ant, int x){
    return (x-ant)/abs(x-ant);
}

int main(){_
    while ((cin>>n)&&n){
        h = vi(n), ans = 0;
        for (int i=0; i<n; i++){
            cin>>h[i];
        }
        ant = sinal(h[n-1],h[0]);
        for (int i=1; i<n+1; i++){
            ans+=(sinal(h[(i-1)%n],h[i%n])!=ant);
            ant=sinal(h[(i-1)%n],h[i%n]);
        }
        cout<<ans<<endl;
    }
    return 0;
}

