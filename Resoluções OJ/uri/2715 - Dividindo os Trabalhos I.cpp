// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Dividindo os Trabalhos I
// Nível: 2
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2715

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define i64 long long

using namespace std;

i64 v[1>>20],a[1<<20],n,ans;

int main(){_
    while (cin>>n){
        for (int i=1;i<=n;i++){
            cin>>a[i];
            a[i] += a[i-1];
        }
        ans = a[n]*4;
        for (int i=0;i<n;i++){
            ans = min(ans, abs(a[n]-2*a[i]));
        }
        cout<<ans<<endl;
    }
    return 0;
}

