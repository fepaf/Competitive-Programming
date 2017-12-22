// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Elementar, meu Caro Watson!
// Nível: 3
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1382

#include<bits/stdc++.h>
#define vi vector<int>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int t,n,i,j,k,ans;
vi a;
bitset<10009> b;

int main(){_
    for (cin>>t; t--;){
        cin>>n;
        a = vi(n+1);  b.set(), ans=0;
        for (i=1;i<=n;i++) cin>>a[i];
        for (i=1;i<=n;i++){
            if (b[i]){
                for (j=i; a[j]!=i; j=a[j]){
                    ans++;
                    b[j]=0;
                }
                b[j]=0;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

