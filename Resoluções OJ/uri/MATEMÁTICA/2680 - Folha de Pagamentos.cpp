// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Folha de Pagamentos
// Nível: 4
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2680

#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAX 10123
#define pb push_back
#define ll long long
#define vi vector<ll>

using namespace std;

vi primo;
bitset <MAX> ehcomp;
ll ans,f,n,m,expo;

void sieve(int n){
    primo.pb(2);
    for (int i=3; i*i<=n; i+=2){
        if (!ehcomp[i]){
            primo.pb(i);
            for (int j=i*i ; j<=n; j+=i){
                ehcomp[j]=1;
            }
        }
    }
    for (int i=primo[primo.size()-1]+2; i<=n; i+=2){
        if (!ehcomp[i]) primo.pb(i);
    }
}

int main(){_
    sieve(10100);
    /*for (int i=0;i<primo.size();i++){
        cout<<primo[i]<<"_";
    }*/
    cin>>n;
    while (n--){
        cin>>m;
        ans = 1;
        for (int i=0; primo[i]*primo[i]<=m; i++){
            expo = 0;
            while (m%primo[i]==0){
                m/=primo[i];
                ++expo;
            }
            ans *= (pow(primo[i],(expo+1))-1)/(primo[i]-1);
        }
        if (m!=1){
            ans *= ((m*m)-1)/(m-1);
        }
        cout<<ans<<endl;
    }
    return 0;
}

