// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Caçadores de Mitos
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2343

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int n,x,ans,y;
set <int> quad;

int main(){
    while (cin>>n){
        ans=0; quad.clear();
        while (n--){
            cin>>x>>y;
            ans|=quad.count(y*501+x);
            quad.insert(y*501+x);
        }
        cout<<ans<<endl;
    }
    return 0;
}

