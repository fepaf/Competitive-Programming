// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Jogo da Estratégia
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1940

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int j,i,r,p[502],x,ma;

int main(){_
    cin>>j>>r;
    for (int k=0;k<j*r;k++){
        cin>>x;
        p[k%j]+=x;
        if (p[k%j]>=p[ma]) ma=k%j;
    }
    cout<<(++ma)<<endl;
    return 0;
}

