// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Encaixa ou Não II
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1241

#include<bits/stdc++.h>
 
using namespace std;
 
string a,b;
int n,fit,i;
 
int main(){
    cin>>n;
    while (n--){
        cin>>a>>b;
        for (i=min(a.length(),b.length()),fit=1;i--;){
        	//cout<<b[i]<<":"<<a[a.length()-b.length()+i]<<endl;
            fit*=(b[i]==a[a.length()-b.length()+i]);
        }
        cout<<(fit ?"encaixa":"nao encaixa")<<endl;
    }
    return 0;
}
