// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Jornada nas Estrelas
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1973

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define maxn 1000123

using namespace std;

long long x[maxn],atk[maxn],y,n,i,s,a;

int main(){_
    cin>>n;
    for (i=0;i<n;i++){
        cin>>x[i];
        s+=x[i];
    }
    for (i=0;i>-1 && i<n;){
        atk[i]=1;
        if (x[i])s--;
        x[i]--;
        if (x[i]%2) i--;
        else i++;
    }
    for (i=0;i<n;i++) a+=atk[i];
    cout<<a<<" "<<s<<endl;
    return 0;
}

