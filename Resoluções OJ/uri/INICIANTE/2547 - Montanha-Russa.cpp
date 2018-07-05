// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Montanha-Russa
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2547

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int n,low, high,ans,a;

int main(){_
    while (cin>>n>>low>>high){
        ans=0;
        while (n--){
            cin>>a;
            ans+=(low<=a && a<=high);
        }
        cout<<ans<<endl;
    }
    return 0;
}

