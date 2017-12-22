#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define eb emplace_back
#define ll long long
#define vl vector<ll>
#define vvl vector<vl>
#define TAM 2

using namespace std;


vvl mult(vvl a, vvl b){
    vvl ans = vvl(TAM,vl(TAM,0));

    for (int i=0;i<TAM;i++){
        for (int j=0;j<TAM;j++){
            for (int k=0;k<TAM;k++){
                ans[i][j] += a[i][k]*b[k][j];
            }
        }
    }

    return ans;
}

vvl fexp(vvl b, ll e){
    vvl ans = vvl(TAM,vl(TAM,0LL));

    for (int i=TAM;i--;) ans[i][i]=1;

    for (; e; b = mult(b,b), e>>=1) if (e&1) ans = mult(ans,b);

    return ans;
}


vvl t;
ll p,q,n;
vl a,b,c;

int main(){_
    while (cin>>p>>q>>n){
        a.eb(p) , b.eb(q) , c.eb(n);
    }
    for (int i=0; i<a.size(); i++){
        p = a[i], q = b[i], n = c[i];
        t = fexp({{p,-q},{1,0}},n);
        cout<<(p*t[1][0]+(t[1][1]*2))<<endl;
    }
    return 0;
}
