// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Ajude Girafales
// Nível: 2
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1911

#include<bits/stdc++.h>
 
using namespace std;
 
int n,m,i,cont,dif;
map<string,string> asgn;
string nome,assinatura;
 
int main(){
    ios_base::sync_with_stdio(false);
    while ((cin>>n) && n){
        cont=0;
        while (n--){
            cin>>nome>>assinatura;
            asgn[nome]=assinatura;
        }
        cin>>m;
        while (m--){
            cin>>nome>>assinatura;
            for (dif=i=0;i<assinatura.length();i++) dif+=(asgn[nome][i]!=assinatura[i]);
            cont+=(dif>1);
        }
        cout<<cont<<endl;
    }
     
    return 0;
}
