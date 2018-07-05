// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Corvo Contador
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1848

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

string s;
int n,soma,scream;

int main(){
    scream=3;
    while (scream--){
        soma=0;
        while (getline(cin,s) && (s!="caw caw")){
            soma+=(s[0]=='*')*4+(s[1]=='*')*2+(s[2]=='*');
        }      
        cout<<soma<<endl;
    }
    return 0;
}
