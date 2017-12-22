// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Coral Perfeito
// Nível: 3
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1225

#include<bits/stdc++.h>
#define MAX 10010
#define _ ios_base::sync_with_stdio(0);

using namespace std;

long long n,sum,nota[MAX],ans,med;

int main(){_
    while (cin>>n){
        sum=0;
        for (int i=n;i--;){
            cin>>nota[i];
            sum+=nota[i];
        }
        if (sum%n==0){
            med=sum/n;
            ans=0;
            for (int i=n; i--; ){
                ans+=(nota[i]>med)*(nota[i]-med);
            }
            cout<<ans+1<<endl;
        }
        else cout<<"-1"<<endl;
    }
    return 0;
}

