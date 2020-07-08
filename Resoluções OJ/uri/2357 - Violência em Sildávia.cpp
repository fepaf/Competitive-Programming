// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Violência em Sildávia
// Nível: 3
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2357

#include<bits/stdc++.h>
#define INF 0x3f3f3f3f
#define MAXN 10123
#define ii pair<int,int>
#define vi vector<int>
#define vvi vector<vi>
#define vii vector<ii>
#define vvii vector<vii>
#define vvvi vector<vvi>
#define eb emplace_back
#define fs first
#define sc second
#define pos(i,j) (i)*n+(j)
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int pai[MAXN];

int id(int n){return pai[n]==n ? pai[n] : pai[n]=id(pai[n]);}

int join(int u, int v){
    u = id(u), v = id(v);
    if (u==v) return 0;
    pai[v] = u;
    return 1;
}

void init(int n){
    for (int i=n+1;i--;) pai[i] = i;
}

int n,m,a,b,ans;

int main(){_
    while (cin>>n>>m){
        init(n); ans = 1;
        while (m--){
            cin>>a>>b;
            ans &= join(a,b);
        }
        cout<<(ans ? "Seguro" : "Inseguro")<<endl;
    }
    return 0;
}

