// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Procurando Assentos
// Nível: 6
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1365

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MOD int(10e9)+7
#define UNVISITED -1
#define VISITED 1
#define ii pair<int, int>
#define vi vector<int>
#define vii vector<ii>
#define vd vector<double>
#define qi queue<int>

using namespace std;

int r,c,n,sc[302][302],i,j,k,a,b,ans;
char t[302][302];

int quad(int i1, int j1, int i2, int j2){
    return sc[i2][j2]-sc[i2][j1-1]-sc[i1-1][j2]+sc[i1-1][j1-1];
}

int main(){_
    while ((cin>>r>>c>>n)&&(r||c||n)){
        for (i=1;i<=r;i++){
            for (j=1;j<=c;j++){
                cin>>t[i][j];
                sc[i][j]=(t[i][j]=='.')+sc[i-1][j]+sc[i][j-1]-sc[i-1][j-1];
                //cout<<sc[i][j]<<" ";
            }
            //cout<<endl;
        }
        ans=r*c;
        for (i=1;i<=r;i++) for (j=1;j<=c;j++) {
            if (sc[i][j]<n) continue;
            a=1;
            for (b=1;b<=j;b++) {
                while (quad(a,b,i,j)>=n && a<i) a++;
                while (quad(a,b,i,j)<n && a>1) a--;
                if (quad(a,b,i,j)>=n) ans=min(ans, (i-a+1)*(j-b+1));
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

