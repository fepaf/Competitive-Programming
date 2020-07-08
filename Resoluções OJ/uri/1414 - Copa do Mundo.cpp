// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Copa do Mundo
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1414

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int t,n,s,ans,x;
string nome;

int main(){_
    while ((cin>>t>>n)&&(t+n)){
        s=0;
        for (int i=t;i--;){
            cin>>nome>>x;
            s+=x;
        }
        ans=3*n-s;
        cout<<ans<<endl;
    }
    return 0;
}

