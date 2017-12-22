// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Eleições
// Nível: 2
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2084

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define ll long long

using namespace std;

int n;
double sum,v,v1,v2;

int main(){_
    while (cin>>n){
        priority_queue<double> pq;
        sum = 0.0;
        for (int i=1;i<=n;i++){
            cin>>v;
            pq.push(v);
            sum += v;
        }
        v1 = pq.top(); pq.pop();
        v2 = pq.top(); pq.pop();
        cout<<(100*(v1/sum)>=45 || (100*((v1/sum)-(v2/sum))>=10 && 100*(v1/sum)>=40) ? 1 : 2)<<endl;
    }
    return 0;
}

