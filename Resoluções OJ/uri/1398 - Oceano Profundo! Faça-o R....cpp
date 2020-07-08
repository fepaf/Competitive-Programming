// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Oceano Profundo! Faça-o R...
// Nível: 3
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1398

#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define mod 131071

using namespace std;

string n;
int r,t,i;

int main(){_
    while (getline(cin,n)){
            t=n.size();
            for (i=0; i<t; i++){
                if (n[i]=='1' || n[i]=='0') r=(((2*r)%mod)+(n[i]-'0'))%mod;
                else if (n[i]=='#'){
                    cout<<(r ? "NO":"YES")<<endl;
                    r=0;
                }
            }
    }
    return 0;
}

