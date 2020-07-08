// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Ilhas Isoladas
// Nível: 2
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2492

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define INF 0x3f3f3f3f3f
#define ii pair<ll,int>
#define vi vector<ll>
#define vvi vector<vi>
#define eb emplace_back
#define fs first
#define sc second
#define ll long long
#define MAX (1<<10)

using namespace std;

map<string,int> x,y;
int n,ans;
string de,para,traco;

int main(){_
    while ((cin>>n) && n){
        ans = 3;
        while (n--){
            cin>>de>>traco>>para;
            x[de]++ , y[para]++;
            ans &= (((x[de]==1)<<1)|(y[para]==1));
        }
        if (ans == 3){
            cout<<"Invertible."<<endl;
        }
        else if (ans == 2){
            cout<<"Not invertible."<<endl;
        }
        else{
            cout<<"Not a function."<<endl;
        }
        x.clear() , y.clear();
    }
}

