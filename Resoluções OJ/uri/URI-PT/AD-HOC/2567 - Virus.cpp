// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Virus
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2567

#include<bits/stdc++.h>
#define _ ios_base::sync_with_sydio(0):

using namespace std;

int a[1000],n,ans;

int main(){
    while (cin>>n){
        for (int i=n;i--;){
            cin>>a[i];
        }
        sort(a,a+n);
        ans=0;
        for (int i=0; i<n/2; i++){
            ans+=a[n-i-1]-a[i];
        }

        cout<<ans<<endl;
    }
}

