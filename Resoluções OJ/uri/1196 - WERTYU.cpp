// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: WERTYU
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1196

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int i,j;
char decod[256];
string str;

int main(){
    str="`1234567890-=";
    for (i=1;i<str.size();i++) decod[str[i]]=str[i-1];
    str="QWERTYUIOP[]\\";
    for (i=1;i<str.size();i++) decod[str[i]]=str[i-1];
    str="ASDFGHJKL;'";
    for (i=1;i<str.size();i++) decod[str[i]]=str[i-1];
    str="ZXCVBNM,./";
    for (i=1;i<str.size();i++) decod[str[i]]=str[i-1];
    while (getline(cin,str)){
        for (i=0;i<str.size();i++) cout<<(str[i]==' '?' ': decod[str[i]]);
        cout<<endl;
    }
    return 0;
}

