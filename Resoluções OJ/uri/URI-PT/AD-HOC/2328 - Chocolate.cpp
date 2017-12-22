// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Chocolate
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2328

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int n,x,ans;

int main(){
    cin>>n;
    while (n--){
        cin>>x;
        ans+=x-1;
    }
    cout<<ans<<endl;
    return 0;
}

