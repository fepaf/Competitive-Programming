// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Corrida
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2396

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define INF 0x3f3f3f3f
#define pb push_back
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define vvii vector<vii>
#define vvi vector<vi>
#define fs first
#define sc second

using namespace std;

int n,m,s,x;

int main(){_
    while (cin>>n>>m){
        priority_queue <ii , vii , greater<ii> > pq;
        for (int i=1;i<=n;i++){
            s=0;
            for (int j=1;j<=m;j++){
                cin>>x;
                s+=x;
            }
            pq.push(ii(s,i));
        }
        cout<<pq.top().sc<<endl;
        pq.pop();
        cout<<pq.top().sc<<endl;
        pq.pop();
        cout<<pq.top().sc<<endl;
        pq.pop();

    }
    return 0;
}

