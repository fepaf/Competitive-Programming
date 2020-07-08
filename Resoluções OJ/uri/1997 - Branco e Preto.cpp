// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Branco e Preto
// Nível: 3
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1997

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int i,j,r,tam;
string s,t;

int main(){_
    while ((cin>>s>>t) && (s!="*") && (t!="*")){
        tam=s.size();
        for (r=i=0;i<tam;i++){
            if (s[i]!=t[i]){
                r++;
                while (s[i]!=t[i] && i<tam) i++;
                i--;
            }
        }
        cout<<r<<endl;
    }
    return 0;
}

