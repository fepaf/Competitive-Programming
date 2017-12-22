// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Cifra de César
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1253

#include<bits/stdc++.h>

using namespace std;

int n,d,i;
string s;

int main(){
    cin>>n;
    while (n--){
        cin>>s>>d;
        for (i=s.length();i--;) s[i]=(s[i]-'A'-d+26)%26+'A';
        cout<<s<<endl;
    }
    return 0;
}

