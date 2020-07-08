// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: System of a Download
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2582

#include<bits/stdc++.h>
#define MAXN 10123
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int c,x,y;
string music[]{"PROXYCITY","P.Y.N.G.","DNSUEY!","SERVERS","HOST!","CRIPTONIZE","OFFLINE DAY","SALT","ANSWER!","RAR?","WIFI ANTENNAS"};

int main(){_
    cin>>c;
    while (c--){
        cin>>x>>y;
        cout<<music[x+y]<<endl;
    }
    return 0;
}

