// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Criptografia
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1024

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);

using namespace std;

string s;
int i,n,t;

int main(){
    cin>>n;
    getline(cin,s);
    while (n--){
        getline(cin,s);
        t=s.length();
        for (i=t;i--;) if (isalpha(s[i])) s[i]+=3;
        reverse(s.begin(),s.end());
        for (i=(t)/2;i<t;i++) s[i]--;
        cout<<s<<endl;
    }
    return 0;
}

