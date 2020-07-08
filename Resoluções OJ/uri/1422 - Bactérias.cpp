// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Bactérias
// Nível: 5
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1422

#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define mod 13371337

using namespace std;

typedef long long ll;

void mult(ll m1[][4], ll m2[][4], ll m){
    int i,j,k,r[4][4];
    for (i=0;i<4;i++){
        for (j=0;j<4;j++){
            r[i][j]=0;
            for (k=0;k<4;k++) r[i][j]=(r[i][j]+((m1[i][k]%m)*(m2[k][j]%m))%m)%m;
        }
    }
    for (i=0;i<4;i++) for (j=0;j<4;j++) m1[i][j]=r[i][j];
}

void power (ll f[][4], ll n, ll m){
    ll b[][4]={{1,1,1,1},{1,0,0,0},{0,1,0,0},{0,0,1,0}};

    if (n<2)return;

    power(f,n/2,m);

    mult(f,f,m);

    if (n%2) mult(f,b,m);
}

int main(){_
    ll i,j,n,r,a[4],b[4][4],x[4][4]={{1,1,1,1},{1,0,0,0},{0,1,0,0},{0,0,1,0}};
    while ((cin>>n)&&n){
        for (i=0;i<4;i++) for (j=0;j<4;j++) b[i][j]=x[i][j];
        cin>>a[0]>>a[1]>>a[2]>>a[3];
        power(b,n-3,mod);
        for (i=4,r=0;i--;) r=(r+((b[0][3-i]%mod)*(a[i]%mod))%mod)%mod;
        cout<<r<<endl;
    }
    return 0;
}

