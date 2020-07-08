// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Troca de Cartas
// Nível: 3
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1104

#include<bits/stdc++.h>
 
using namespace std;
 
int main (){
    int a,b,nx,ny,nu,ni,xi,yi;
    set<int> x,y,uniao;
     
    while((cin>>a>>b) && a && b){       
        x.clear();
        y.clear();
        uniao.clear();
         
        while(a--){
            cin>>xi;
            x.insert(xi);
            uniao.insert(xi);
        }
        nx=x.size();
        while(b--){
            cin>>yi;
            y.insert(yi);
            uniao.insert(yi);
        }
        ny=y.size();
         
        nu=uniao.size();
         
        ni=nx+ny-nu;
         
        cout<<(min(nx,ny)-ni)<<endl;
    }
     
    return 0;
}
