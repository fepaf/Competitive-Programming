// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Trilhos
// Nível: 3
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1062

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
 
using namespace std;
 
int n,i,x,ok;
 
stack <int> a,s;
 
int ta(int x){
    int r;
    while (!a.empty() && a.top()!=x){
        s.push(a.top());
        a.pop();
    }
 
    if (a.empty()) return -1;
 
    r=a.top();
    a.pop();
    return r;
}
 
int ts(int x){
    int r;
    if (s.empty() || s.top()!=x) return -1;
    r=s.top();
    s.pop();
    return r;
}
 
int main(){
    int t=0;
    while ((cin>>n) && n){
       // if(t++)cout<<endl;
        while ((cin>>x) && x){
            a.push(x);
            for (i=n-1;i--;){
                cin>>x;
                a.push(x);
            }
            for (ok=1,i=n;i;i--){
                if (i!=ts(i) && i!=ta(i)){
                    ok=0;
                    break;
                }
            }
            cout<<(ok ? "Yes":"No")<<endl;
            while (!a.empty()) a.pop();
            while (!s.empty()) s.pop();
        }
        cout<<endl;
    }
    return 0;
}
