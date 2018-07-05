// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Nomes de Usuários
// Nível: 3
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2549

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAX 1000123
#define vi vector<ll>
#define eb emplace_back
#define ll long long

using namespace std;

string completo,nome,user;
int n,a;
stringstream ss;
set <string> users;

int main(){_
    while (cin>>n>>a){
        cin.ignore();
        for (int i=n; i--;){
            getline(cin,completo);
            ss<<completo; user="";
            while(ss>>nome){
                user += nome[0];
            }
            ss.clear();
            users.insert(user);
        }
        cout<<(n-users.size())<<endl;
        users.clear();
    }
    return 0;
}

