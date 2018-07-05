// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Feira de Bactérias
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2340

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAX (1<<20)

using namespace std;

int n, ans;
double d[MAX], c[MAX];

int main(){_
    while (cin>>n){
        ans = 0;
        for (int i=0; i<n; i++){
            cin>>d[i]>>c[i];
            if (c[i] * log(d[i]) > c[ans] * log(d[ans])){
                ans = i;
            }
        }
        cout<<ans<<endl;
    }
}

