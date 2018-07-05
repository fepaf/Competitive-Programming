// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Saltos Ornamentais
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2311

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

double s[7],low,high,ans,sum,d;
int n,i,j;
string nome;

int main(){_
    cin>>n;
    while (n--){
        cin>>nome>>d>>s[0];
        low=high=sum=s[0];
        for (i=6;i--;){
            cin>>s[i];
            low=min(low,s[i]);
            high=max(high,s[i]);
            sum+=s[i];
        }
        ans=(sum-low-high)*d;
        cout<<nome<<" "<<fixed<<setprecision(2)<<setfill('0')<<ans<<endl;
    }
    return 0;
}

