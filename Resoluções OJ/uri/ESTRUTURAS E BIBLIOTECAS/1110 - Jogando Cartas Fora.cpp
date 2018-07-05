// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Jogando Cartas Fora
// Nível: 2
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1110

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);
  
using namespace std;
   
int main(){_
    int n,x,c;
    queue <int> fila;
    while ((cin>>n) && n){
        for (int i=0;i<n;i++)  fila.push(i+1);
        cout<<"Discarded cards:";
        c=0;
        while (fila.size()-1){
            if (c=1-c) {
                cout<<" "<<fila.front()<<(fila.size()-2?",":"");
                fila.pop();
            } 
            else {
                fila.push(fila.front());
                fila.pop();
            }
        }
        cout<<"\nRemaining card: "<<fila.front()<<endl;
        fila.pop();
    }
    return 0;
}
