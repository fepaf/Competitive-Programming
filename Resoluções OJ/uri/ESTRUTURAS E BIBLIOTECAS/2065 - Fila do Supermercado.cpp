// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Fila do Supermercado
// Nível: 4
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2065

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define ii pair<int,int>
#define fs first
#define sc second
#define vi vector<int>
#define eb emplace_back

using namespace std;

priority_queue<ii, vector<ii>, greater<ii> > pq;
int n,m,c,ans,t,i;
vi v;

int main(){_
    while (cin>>n>>m){
        v = vi(n);
        for (int i=0;i<n;i++){
            cin>>v[i];
            pq.push(ii(0,i));
        }
        ans = 0;
        while (m--){
            cin>>c;
            ii topo = pq.top(); pq.pop();
            t=topo.fs , i=topo.sc;
            ans = max(ans,t);
            pq.push(ii(t+v[i]*c,i));
        }
        while (!pq.empty()){
            ans = max(ans,pq.top().fs);
            pq.pop();
        }
        cout<<ans<<endl;
    }

    return 0;
}

