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

int n,ispal[MAX][MAX],m,parts[MAX],menor,caso;
string s;

int main(){_
    while (cin>>n && n){
        cin>>s;
        m=s.size();
        for (int i=m;i--;) ispal[i][i]=1;
        for (int i=m-1;i--;) ispal[i][i+1]=(s[i]==s[i+1]);
        for (int k=2;k<m;k++){
            for (int i=0;i+k<m;i++){
                int j=i+k;
                ispal[i][j]=(ispal[i+1][j-1]&(s[i]==s[j]));
            }
        }
        for (int i=0; i<m; i++){
            if (ispal[0][i]){
                parts[i]=1;
                continue;
            }
            menor=INF;
            for (int j=0;j<i;j++){
                if (ispal[j+1][i] && (parts[j]+ispal[j+1][i]<menor)){
                    menor=parts[j]+ispal[j+1][i];
                }
            }
            parts[i]=(menor==INF ? 1 : menor);
        }
        cout<<"Teste "<<++caso<<endl<<parts[m-1]<<endl<<endl;
    }
    return 0;
}

