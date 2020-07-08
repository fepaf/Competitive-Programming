// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Onde está o Mármore?
// Nível: 2
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1025

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAX 10123
#define MOD 1000000007
#define UNVISITED -1
#define VISITED 1
#define ull unsigned long long
#define ll long long
#define ii pair<int, int>
#define vi vector<int>
#define vvi vector<vi>
#define vii vector<ii>
#define vd vector<double>
#define qi queue<int>
#define fs first
#define sc second
#define pb push_back

using namespace std;

int n,q,x,y,lo,hi,med,test;
vi a;

int main(){_
    while ((cin>>n>>q)&&(n||q)){
        a=vi(n,-1);
        for (int i=n;i--;) cin>>a[i];
        sort(a.begin(),a.end());
        cout<<"CASE# "<<++test<<":"<<endl;
        while (q--){
            cin>>x;
            auto it = lower_bound(a.begin(),a.end(),x);
            if (it!=a.end() && a[(it-a.begin())]==x) cout<<x<<" found at "<<(it-a.begin())+1<<endl;
            else cout<<x<<" not found"<<endl;
        }
    }
    return 0;
}

