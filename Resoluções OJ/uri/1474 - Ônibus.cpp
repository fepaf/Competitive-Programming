// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Ônibus
// Nível: 6
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1474

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MOD 1000000
#define ull unsigned long long

using namespace std;

struct matrix{
    ull m[2][2];
};

const matrix ident = {{{1,0}, {0,1}}};

matrix multi(matrix a, matrix b, ull m){
    matrix ans;
    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            ans.m[i][j]=0ULL;
            for (int k=0;k<2;k++) ans.m[i][j] += (a.m[i][k]*b.m[k][j])%MOD;
            ans.m[i][j] %= m;
        }
    }
    return ans;
}

matrix fast(matrix b, ull e, ull m){
    matrix ans;
    for (ans=ident; e; b=multi(b,b,m), e>>=1) if (e&1) ans=multi(ans,b,m);
    return ans;
}

ull n;
ull k,l,ans;
matrix q;

int main(){_
    while (cin>>n>>k>>l){
        k %= MOD, l %= MOD;
        q = {{{k,l}, {1,0}}};
        q = fast(q,n/5,MOD);
        ans = (q.m[1][0]*k + q.m[1][1])%MOD;
        cout<<fixed<<setw(6)<<setfill('0')<<ans<<endl;
    }
    return 0;
}

