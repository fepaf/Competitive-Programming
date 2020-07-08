// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Língua do P
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2453

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);
 
using namespace std;
 
string s;
int i,j;
 
int main(){_
    getline(cin,s);
    for (i=0;i<s.length();i++){
        if (s[i]==' '){
            cout<<s[i];
            j++;
        }
        else if (i%2 != j%2) cout<<s[i];
    }
    cout<<endl;
    return 0;
}
