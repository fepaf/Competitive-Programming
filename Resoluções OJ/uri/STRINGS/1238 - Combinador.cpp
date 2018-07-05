// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Combinador
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1238

#include<bits/stdc++.h>

using namespace std;

int n;
string s1,s2,s;

int main(){
    cin>>n;
    getline(cin,s1);
    while (n--){
        cin>>s1>>s2;
        for (int i=0;i<min(s1.length(),s2.length());i++){
            cout<<s1[i]<<s2[i];
        }
        s=(s1.length()>s2.length()?s1:s2);
        for (int i=min(s1.length(),s2.length());i<max(s1.length(),s2.length());i++){
            cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}

