// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Dígito Mais Frequente
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2138

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

string n;
int f[10],maior;

int main(){_
    while (cin>>n){
        for (int i=0;i<10;i++) f[i]=0;
        for (int i=n.size();i--;){
            ++f[n[i]-'0'];
        }
        maior=0;
        for (int i=0;i<10;i++){
            if (f[i]>=f[maior]) maior=i;
        }
        cout<<maior<<endl;
    }
    return 0;
}

