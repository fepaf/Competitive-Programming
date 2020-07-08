// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: A Fronteira Final
// Nível: 3
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1967

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define ll long long
#define EPS (1e-10)

using namespace std;

/*
g 600
a 100
m 2000
c 100
*/

int g,a,m,c,i,j,k,col[101],tam,n,t1[601][101],t2[101][2001],t3[2001][101];
ll ans[601][101],m1[601][2001];

int main(){_
    scanf("%i %i %i %i",&g,&a,&m,&c);
    for (i=0;i<g;i++){
        for (j=0;j<a;j++){
            scanf("%i",&t1[i][j]);
        }
    }

    for (i=0;i<a;i++){
        for (j=0;j<m;j++){
            scanf("%i",&t2[i][j]);
        }
    }

    for (i=0;i<g;i++){
        for (j=0;j<m;j++){
            for (k=0;k<a;k++){
                m1[i][j] += t1[i][k]*t2[k][j];
            }
        }
    }

    for (i=0;i<m;i++){
        for (j=0;j<c;j++){
            scanf("%i",&t3[i][j]);
        }
    }

    for (i=0;i<g;i++){
        for (j=0;j<c;j++){
            for (k=0;k<m;k++){
                ans[i][j] += m1[i][k]*t3[k][j];
            }
            tam = 0; n = ans[i][j];
            do{
                ++tam;
                n/=10;
            }while(n);
            col[j] = max(col[j],tam);
        }
    }
    cout<<fixed<<setfill(' ');
    --col[0];
    for (i=0;i<g;i++){
        for (j=0;j<c;j++){
            cout<<setw(col[j]+1)<<ans[i][j];
        }
        cout<<endl;
    }
    return 0;
}

