// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: D como em Daedalus
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2016

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

long long i,j,n,m,b,c,d,s,pt0,pt1;

int main(){_
    cin>>n>>m;
    pt0=pt1=0;
    while (m--){
        cin>>b>>d;
        for (s=d,j=n-1;j--;){
            cin>>c;
            s+=c;
        }
        pt0+=(s<=b)*d;
        pt1+=(b-s+d>0)*pow(10,min(int(log10(b-s+d)),4));
    }
    cout<<pt1-pt0<<endl;
    return 0;
}

