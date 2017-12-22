// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Nagol
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2579

#include<bits/stdc++.h>
#define MAX (1<<10)
#define vi  vector <int>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int l,c,x,y;

int main(){
    while (cin>>l>>c>>x>>y){
        cout<<((x*c+y)&1 ? "Esquerda" : "Direita")<<endl;
    }
    return 0;
}

