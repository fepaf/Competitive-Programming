// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Eu Posso Adivinhar a Estr...
// Nível: 4
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1340

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int o, x, q, s, pq, n, mask;

int main(){_
    while (cin>>n){
        mask=0;
        queue<int> fila;
        stack<int> pilha;
        priority_queue<int> fila_prio;

        while (n--){
            cin>>o>>x;
            if (o==1) fila_prio.push(x), fila.push(x), pilha.push(x);
            else {
                mask|=((!fila.empty() && fila.front()!=x)||(fila.empty()))<<0;
                if (!fila.empty()) fila.pop();
                mask|=((!pilha.empty() && pilha.top()!=x)||(pilha.empty()))<<1;
                if (!pilha.empty()) pilha.pop();
                mask|=((!fila_prio.empty() && fila_prio.top()!=x)||(fila_prio.empty()))<<2;
                if (!fila_prio.empty()) fila_prio.pop();
            }
        }
        if (mask==7) cout<<"impossible"<<endl;
        else if (!(mask & (mask-1))) cout<<"not sure"<<endl;
        else if (mask==6) cout<<"queue"<<endl;
        else if (mask==5) cout<<"stack"<<endl;
        else cout<<"priority queue"<<endl;
     }
     return 0;
}

