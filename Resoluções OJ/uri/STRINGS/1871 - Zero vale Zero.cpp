// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Zero vale Zero
// Nível: 1
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1871

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int n, m, ans;

int f(int n){
    if (!n) return 0;
    if (n%10==0){
        return f(n/10);
    }
    else  return f(n/10)*10+(n%10);
}

int main(){_
    while ((cin>>n>>m) && (n||m)){
        cout<<f(n+m)<<endl;
    }
    return 0;
}

