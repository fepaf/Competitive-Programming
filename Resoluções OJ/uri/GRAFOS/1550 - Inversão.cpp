// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Inversão
// Nível: 4
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1550

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define maxn 100005
 
using namespace std;
 
int t,a,b,inv,num,res,mark[maxn],dist[maxn],n;
queue <int> fila,limpar;
 
int main(){_
    cin>>t;
    while (t--){
        cin>>a>>b;
        fila.push(a);
        dist[a]=0;
        while (!fila.empty()){
            num=fila.front();
            fila.pop();
             
            limpar.push(num);
             
            mark[num]=1;
             
            if (num==b){
                res=dist[num];
                break;  
            }
             
            if (!mark[num+1]){
                mark[num+1]=1;
                dist[num+1]=dist[num]+1;
                fila.push(num+1);
            }
             
            for (n=num,inv=0; n; n/=10) inv=10*inv+(n%10);
             
            if (!mark[inv]){
                mark[inv]=1;
                dist[inv]=dist[num]+1;
                fila.push(inv);
            }
        }
       
        while (!fila.empty()){
            n=fila.front();
            mark[n]=0;
            fila.pop();
        }
 
        while (!limpar.empty()){
            n=limpar.front();
            mark[n]=0;
            limpar.pop();
        }
         
        cout<<res<<endl;
    }
    return 0;
}
