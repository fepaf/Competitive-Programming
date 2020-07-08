// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Bolacha
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2515

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
#define mp make_pair

using namespace std;

ll n,lo,hi,mid,x,y,diff;
vi b,sc;

int main(){_
    while (cin>>n){
        b = vi(n+1,0), sc = vi(n+1,0);
        for (int i=1;i<=n;i++){
            cin>>b[i];
            sc[i]=sc[i-1]+b[i];
        }
        diff=sc[n]+1;
        for (int i=1;i<n;i++){
            if (abs(sc[n]-2*sc[i])<diff){
                x=min(sc[n]-sc[i],sc[i]);
                y=max(sc[n]-sc[i],sc[i]);
                diff=abs(sc[n]-2*sc[i]);
            }
        }
        cout<<x<<" "<<y<<endl;
    }
    return 0;
}

