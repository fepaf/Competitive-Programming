// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Pentágono
// Nível: 3
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2584

#include<bits/stdc++.h>
#define MAXN 10123
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int c;
double n,pi=2.0*acos(0.0);

int main(){_
    cin>>c;
    cout<<fixed<<setprecision(3);
    while (c--){
        cin>>n;
        cout<<(2.5*n*n/(2.0*tan(pi/5.0)))<<endl;
    }
    return 0;
}

