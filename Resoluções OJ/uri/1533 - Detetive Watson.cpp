// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Detetive Watson
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1533

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

typedef pair<int, int> ii;

int n,v,i,ans;
priority_queue<ii> pq;

int main(){_
    while ((cin>>n)&&n){
        for (i=1;i<=n;i++){
            cin>>v;
            pq.push(make_pair(v,i));
        }
        pq.pop();
        ans=pq.top().second;
        cout<<ans<<endl;
        while (!pq.empty()) pq.pop();
    }
    return 0;
}

