// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Californication
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2570

#include<bits/stdc++.h>
#define MAX 1<<10
#define vi  vector <int>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int n,m,k,t,x,ans[4];
char ch;
vi l,c;

int main(){_
    while (cin>>n>>m>>k){
        l = vi(n+1,-1) , c = vi(m+1,-1);
        for (int i=0;i<k;i++){
            cin>>ch>>x;
            if (ch=='L') l[x]=i;
            else c[x]=i;
        }
        ans[0]=ans[1]=ans[2]=ans[3]=0;
        for (int i=1;i<=n;i++){
            for (int j=1;j<=m;j++){
                x=max(l[i],c[j]);
                if (x!=-1) ans[x%4]++;
            }
        }
        cout<<'R'<<ans[0]<<' '<<'H'<<ans[1]<<' '<<'C'<<ans[2]<<' '<<'P'<<ans[3]<<endl;
    }
    return 0;
}

