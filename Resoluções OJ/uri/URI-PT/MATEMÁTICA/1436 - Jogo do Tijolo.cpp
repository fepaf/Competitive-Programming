// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Jogo do Tijolo
// Nível: 1
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1436

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
#define vu vector<ull>
#define vs vector<string>
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

int t,n,a,x,v;

int main(){_
    for(cin>>t;t--;){
        cin>>n;
        for (int i=n;i--;){
            cin>>v;
            if (i==(n/2)) a=v;
        }
        cout<<"Case "<<++x<<": "<<a<<endl;
    }
    return 0;
}

