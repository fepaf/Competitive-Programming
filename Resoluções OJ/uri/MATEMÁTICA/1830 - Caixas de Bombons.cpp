// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Caixas de Bombons
// Nível: 3
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1830

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define INF 0x3f3f3f3f
#define ii pair<int,int>
#define vi vector<int>
#define vvi vector<vi>
#define eb emplace_back
#define fs first
#define sc second
#define ll long long
#define MAX (1<<10)

using namespace std;

int caso;
ii inv[3][3]={{ii(29,3000),ii(-1,3000),ii(-1,3000)},{ii(-11,1000),ii(3,1000),ii(-1,1000)},{ii(1,500),ii(-1,500),ii(1,500)}};
double x,y,z,ans[3];

int main(){_
    while ((cin>>x>>y>>z)&&(x||y||z)){
        x *= 1000; y *= 1000, z *= 1000;
        for (int i=3;i--;){
            ans[i] = (inv[i][0].fs*x)/inv[i][0].sc + (inv[i][1].fs*y)/inv[i][1].sc + (inv[i][2].fs*z)/inv[i][2].sc;
        }
        cout<<"Caso #"<<++caso<<": "<<ans[0]<<" Especial, "<<ans[1]<<" Predileta e "<<ans[2]<<" Sortida"<<endl;
    }
    return 0;
}

