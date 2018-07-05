// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: R+L=J
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2557

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAX 1000123
#define vi vector<ll>
#define eb emplace_back
#define ll long long

using namespace std;

string r,l,j;
char *pch,s[101];

int main(){_

    while (gets(s)){
        pch = strtok(s," +=");
        r = pch;
        pch = strtok(NULL," +=");
        l = pch;
        pch = strtok(NULL," +=");
        j = pch;
        if (r=="R"){
            cout<<atoi(j.c_str())-atoi(l.c_str())<<endl;
        }
        else if (l=="L"){
            cout<<atoi(j.c_str())-atoi(r.c_str())<<endl;
        }
        else{
            cout<<atoi(r.c_str())+atoi(l.c_str())<<endl;
        }
    }
    return 0;
}

