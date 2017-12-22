// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Bonde de Autômatos
// Nível: 5
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2627

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int pd[26],n,k,ch,ans,best;
char c;

int main(){_
    while (cin>>n>>k){
        while (n--){
            cin>>c;
            c-='a';
            best = 0;
            for (int i=c+1;i--;){
                best = max(best,pd[i]);
            }
            pd[c]=best+(26-c);
        }
        ans=0;
        for (int i=26;i--;){
            ans=max(ans,pd[i]);
            pd[i]=0;
        }
        cout<<(ans >= k ? "Aceita" : "Rejeita")<<endl;
    }
    return 0;
}

