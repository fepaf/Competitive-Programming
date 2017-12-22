// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: De Dentro para Fora
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1235

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int n,t;
string s1,s2,s;

int main(){_
    cin>>n;
    getline(cin,s);
    while (n--){
        getline(cin,s);
        t=s.size();
        reverse(s.begin(),s.begin()+(t/2));
        reverse(s.begin()+(t/2),s.end());
        cout<<s<<endl;
    }
    return 0;
}
