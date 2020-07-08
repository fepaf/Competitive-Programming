// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Equilibrando Presentes
// Nível: 4
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2723

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define OFFSET 11

using namespace std;

int n,p[10123],memo[10123][25],t;

int f(int idx, int dif){
    if (abs(dif)>5) return 0;
    if (idx==n) return 1;
    int &ans = memo[idx][dif+OFFSET];
    if (~ans) return ans;
    return ans = (f(idx+1,dif+p[idx]) | f(idx+1,dif-p[idx]));
}

int main(){_
    for (cin>>t;t--;){
        cin>>n;
        for (int i=0;i<n;i++){
            cin>>p[i];

        }
        memset(memo,-1,sizeof(memo));
        cout<<(f(0,0) ? "Feliz Natal!" : "Ho Ho Ho!")<<endl;
    }

    return 0;
}

