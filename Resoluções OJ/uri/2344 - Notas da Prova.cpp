// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Notas da Prova
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2344

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int n;

int main(){
    while (cin>>n){
        if (n==0) cout<<"E"<<endl;
        else if (n<=35) cout<<"D"<<endl;
        else if (n<=60) cout<<"C"<<endl;
        else if (n<=85) cout<<"B"<<endl;
        else cout<<"A"<<endl;
    }
    return 0;
}

