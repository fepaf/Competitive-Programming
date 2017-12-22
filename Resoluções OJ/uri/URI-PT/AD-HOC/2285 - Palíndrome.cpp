// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Palíndrome
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2285

#include<bits/stdc++.h>
#define MAX 2018
#define INF 1000000123
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int n,ispal[MAX][MAX],m,cuts[MAX],menor,caso;
string s;

int main(){_
    while (cin>>n && n){
        cin>>s;
        for (int i=n;i--;) ispal[i][i]=1;
        for (int i=n-1;i--;) ispal[i][i+1]=(s[i]==s[i+1]);
        for (int k=2;k<n;k++){
            for (int i=0;i+k<n;i++){
                int j=i+k;
                ispal[i][j]=(ispal[i+1][j-1]&(s[i]==s[j]));
            }
        }
        for (int i=0; i<n; i++){
            if (ispal[0][i]){
                cuts[i]=0;
                continue;
            }
            menor=INF;
            for (int j=0;j<i;j++){
                if (ispal[j+1][i] && (cuts[j]+1<menor)){
                    menor=cuts[j]+1;
                }
            }
            cuts[i]=menor;
        }
        cout<<"Teste "<<++caso<<endl<<++cuts[n-1]<<endl<<endl;
    }
    return 0;
}

