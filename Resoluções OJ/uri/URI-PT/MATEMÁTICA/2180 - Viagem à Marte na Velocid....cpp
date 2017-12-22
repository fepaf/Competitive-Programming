// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Viagem à Marte na Velocid...
// Nível: 2
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2180

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MOD int(10e9)+7
#define UNVISITED -1
#define VISITED 1
#define ii pair<int, int>
#define vi vector<int>
#define vii vector<ii>
#define vd vector<double>
#define qi queue<int>
#define fs first
#define sc second

using namespace std;

int ehprimo(int n){
    if ((n<5) || !(n%2) || !(n%3)) return ((n==2)||(n==3));
    for (int i=5; i*i<=n; i+=6) if (!(n%i) || !(n%(i+2))) return 0;
    return 1;
}

int peso, v, d, h;

int main(){_
    while (cin>>peso){
        v=0;
        for (int i=10; i--;){
            while(!ehprimo(peso)) peso++;
            v+=peso++;
        }
        h=int(60000000)/v;
        d=h/24;
        cout<<v<<" km/h\n"<<h<<" h / "<<d<<" d"<<endl;
    }
    return 0;
}

