// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Bile
// Nível: 4
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2001

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define eb emplace_back
#define ll long long
#define vl vector<ll>
#define vvl vector<vl>
#define TAM (n+1)
#define MOD 303700049

using namespace std;

vvl t;
ll n,k,sum,ans;
vl f;

vvl mult(vvl a, vvl b){
    vvl ans = vvl(TAM,vl(TAM,0));

    for (int i=0;i<TAM;i++){
        for (int j=0;j<TAM;j++){
            for (int k=0;k<TAM;k++){
                ans[i][j] += a[i][k]*b[k][j];
            }
            ans[i][j] %= MOD;
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



int main(){_
    while (cin>>n>>k){
        t = vvl(n+1,vl(n+1,0)); f = vl(n+1,0);
        for (int i=1;i<=n;i++){
            cin>>f[n+1-i];
            f[0] += f[n+1-i];
            t[1][i] = i;
        }
        f[0] -= f[1];
        t[0][0]=t[0][1]=1;
        for (int i=2;i<=n;i++){
            t[i][i-1]=1;
        }

        
        t = fexp(t,k-n);
        

        ans=sum=0;
        for (int i=0;i<n+1;i++){
            
            ans=(ans+(f[i]*t[1][i])%MOD)%MOD; //modularizei aqui AGAIN
            sum=(sum+(f[i]*t[0][i])%MOD)%MOD; //e aqui
        }
        sum = (sum+ans)%MOD;
        
        cout<<ans<<' '<<sum<<endl;
    }
    return 0;
}

