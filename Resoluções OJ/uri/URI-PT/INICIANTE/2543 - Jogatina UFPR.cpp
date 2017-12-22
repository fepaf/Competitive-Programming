// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Jogatina UFPR
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2543

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int n,x,ans,i,j;
map<int,int> f;

int main(){_
    while (cin>>n>>x){        
        while (n--){
            cin>>i>>j;
            f[i]+=(!j);
        }
        cout<<f[x]<<endl;
        f.clear();
    }
    return 0;
}

