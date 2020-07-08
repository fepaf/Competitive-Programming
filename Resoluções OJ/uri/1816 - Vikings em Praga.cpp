// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Vikings em Praga?
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1816

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

int n,m,caso,x;
string alfa;

int main(){_
    while ((cin>>m)&&m){
        alfa = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        cout<<"Instancia "<<++caso<<endl;
        while (m--){
            cin>>x;
            cout<<alfa[x-1];
            alfa = alfa[x-1]+alfa;
            alfa = alfa.substr(0,x)+alfa.substr(x+1);
        }
        cout<<endl<<endl;
    }
    return 0;
}

