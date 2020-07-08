// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Godofor
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2654

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define ll long long
#define EPS (1e-10)

using namespace std;

struct st{
    int p,k,m;
    string nome;
};

bool cmp(st a, st b){
    if (a.p != b.p) return a.p>b.p;
    if (a.k != b.k) return a.k>b.k;
    if (a.m != b.m) return a.m<b.m;
    return a.nome<b.nome;

}

st deuses[1<<7];
int n;

int main(){_
    cin>>n;
    for (int i=n;i--;){
        cin>>deuses[i].nome>>deuses[i].p>>deuses[i].k>>deuses[i].m;
    }
    sort(deuses,deuses+n,cmp);
    cout<<deuses[0].nome<<endl;
    return 0;
}

