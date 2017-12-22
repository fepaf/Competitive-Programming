// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Experiências
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1094

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int i,j,n;
double a,tc,tr,ts,tot;
char t;

int main(){_
    cin>>n;
    for (int i=n;i--;){
        cin>>a>>t;
        tc+=(t=='C')*a;
        tr+=(t=='R')*a;
        ts+=(t=='S')*a;
        tot+=a;
    }
    cout<<fixed<<setprecision(0);
    cout<<"Total: "<<tot<<" cobaias"<<endl;
    cout<<"Total de coelhos: "<<tc<<endl;
    cout<<"Total de ratos: "<<tr<<endl;
    cout<<"Total de sapos: "<<ts<<endl;
    cout<<fixed<<setprecision(2);
    cout<<"Percentual de coelhos: "<<(tc*100.0/tot)<<" %"<<endl;
    cout<<"Percentual de ratos: "<<(tr*100.0/tot)<<" %"<<endl;
    cout<<"Percentual de sapos: "<<(ts*100.0/tot)<<" %"<<endl;
    return 0;
}


