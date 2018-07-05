// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Isósceles
// Nível: 5
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2243

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define vi vector<int>
#define pb push_back
#define MAX 101234

using namespace std;

int n,a[MAX],dir[MAX],esq[MAX],ans;

int main(){_
    cin>>n;
    for (int i=1; i<=n; i++){
        cin>>a[i];
    }
    for (int i=1; i<=n; i++){
        if (a[i]>dir[i-1]){
            dir[i]=dir[i-1]+1;
        }
        else {
            dir[i] = min(dir[i-1],a[i]);
        }
    }
    for (int i=n; i>=1; i--){
        if (a[i]>esq[i+1]){
            esq[i]=esq[i+1]+1;
        }
        else {
            esq[i] = min(esq[i+1],a[i]);
        }
    }
    ans=0;
    for (int i=1; i<=n; i++){
        ans = max(ans, min(dir[i],esq[i]));
    }
    cout<<ans<<endl;
    return 0;
}

