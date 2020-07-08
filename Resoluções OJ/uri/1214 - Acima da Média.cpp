// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Acima da Média
// Nível: 2
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1214

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

int c,n;
double soma,med,acim;
vd nota;

int main(){_
    cout<<fixed<<setprecision(3);
    for (cin>>c;c--;){
        cin>>n;
        soma=0,  nota = vd(n);
        for (int i=n;i--;){
            cin>>nota[i];
            soma+=nota[i];
        }
        med=(soma/n), acim=0;
        for (int i=n;i--;){
            acim+=(nota[i]>med);
        }
        cout<<((acim/n)*100.0)<<"\%"<<endl;
    }
    return 0;
}

