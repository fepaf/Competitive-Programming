// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Biblioteca Pascal
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1267

#include<bits/stdc++.h>
#define ll long long
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int n,d,x,ans,a;

int main(){_
    while (cin>>n>>d && (n+d)){
        ans=0;
        for (int i=n;i--;){
            a=1;
            for (int j=d;j--;){
                cin>>x;
                a&=x;
            }
            ans|=a;
        }
        cout<<(ans ? "yes" : "no")<<endl;
    }
    return 0;
}

