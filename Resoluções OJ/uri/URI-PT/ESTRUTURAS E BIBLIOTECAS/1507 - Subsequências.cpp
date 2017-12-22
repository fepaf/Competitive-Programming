// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Subsequências
// Nível: 3
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1507

#include<bits/stdc++.h>
#define ic pair<char,int>
#define fs first
#define sc second
#define eb emplace_back
#define _ ios_base::sync_with_stdio(0);

using namespace std;

string s,p;
int n,q,t,tam;

int f(int i,int j){
    if (j==t) return 1;
    if (i==tam) return (j==t);
    return f(i+1,j+(s[i]==p[j]));
}

int main(){_
    for (cin>>n; n--;){
        cin>>s;
        tam = s.size();
        for (cin>>q;q--;){
            cin>>p;
            t = p.size();
            // cout<<tam<<" : "<<t<<endl;
            cout<<(f(0,0) ? "Yes" : "No")<<endl;
        }
    }
    return 0;
}

