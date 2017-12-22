// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Discagem de Voz
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2678

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define ll long long

using namespace std;

string num;
char sap[1<<8];

int main(){_
    for (int i='a'; i<='o'; i++){
        sap[i] = (((i-'a')/3)+2)+'0';
    }
    for (int i='p'; i<='s'; i++){
        sap[i] = '7';
    }
    for (int i='t'; i<='v'; i++){
        sap[i] = '8';
    }
    for (int i='w'; i<='z'; i++){
        sap[i] = '9';
    }
    sap['*']='*' , sap['#']='#';
    while (getline(cin,num)){
        for (int i=0; i<num.size(); i++){
            if ('0'<=num[i] && num[i]<='9'){
                cout<<num[i];
            }
            else if (isalpha(num[i])){
                cout<<sap[tolower(num[i])];
            }
            else if (num[i]=='*' || num[i]=='#'){
                cout<<num[i];
            }
        }
        cout<<endl;
    }
    return 0;
}

