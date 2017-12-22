// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Decifre o Texto
// Nível: 4
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1644

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define ll long long
#define MAX (1<<7)

using namespace std;

struct matrix{
    int m[MAX][MAX];
};

ll mmc, tam;
int m,n,p[MAX],x;
string s;
bitset<MAX> ciclo;
matrix t, pos, nula;

inline matrix mult(matrix a, matrix b){
    matrix ans = nula;
    for (int i=n;i--;){
        for (int j=n;j--;){
            for (int k=n;k--;){
                ans.m[i][j] += a.m[i][k]*b.m[k][j];
            }
        }
    }
    return ans;
}

inline matrix fexpo(matrix b, int e){
    matrix ans = nula;
    for (int i=n;i--;) ans.m[i][i]=1;
    for (; e; e>>=1, b=mult(b,b)) if (e&1) ans = mult(ans,b);
    return ans;
}


int main(){_
    memset(nula.m, 0, sizeof(nula.m));
    while ((cin>>n>>m)&& (n||m)){
        t = nula;
        for (int i=1;i<=n;i++){
            cin>>p[i];
            pos.m[i-1][0] = i;
            t.m[p[i]-1][i-1] = 1;
        }
        cin.ignore();
        getline(cin,s);
        ciclo.set();
        mmc = 1LL;
        for (int i=1;i<=n;i++){
            if (ciclo[i]) {
                for (tam = 1 , x = i;  p[x] != i; x = p[x] ){
                    ++tam;
                    ciclo[x] = 0;
                }
                ciclo[x] = 0;
                mmc = (mmc/__gcd(mmc,tam))*tam;
            }
        }
        m %= mmc;
        t = fexpo(t,m);
        pos = mult(t,pos);
        for (int i=1; i<=n; i++){
            cout<<s[pos.m[i-1][0]-1];
        }
        cout<<endl;
    }
    return 0;
}

