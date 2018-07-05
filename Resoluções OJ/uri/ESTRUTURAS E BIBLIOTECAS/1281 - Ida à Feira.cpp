// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Ida à Feira
// Nível: 2
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1281

#include<bits/stdc++.h>

using namespace std;
 
int main(){
    int n,m,p,q;
    map <string,float> prod;
    string s;
    float f,r;
     
    cin>>n;
    while(n--){
        r=0;
        cin>>m;
        while(m--){
            cin>>s>>f;
            prod[s]=f;
        }
        cin>>p;
        while(p--){
            cin>>s>>q;
            r+=prod[s]*q;
        }
        printf("R$ %.2f\n",r);
    }
     
    return 0;
}
