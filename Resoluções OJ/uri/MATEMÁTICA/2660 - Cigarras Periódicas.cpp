// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Cigarras Periódicas
// Nível: 4
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2660

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MOD 1000000007
#define MAX 100123
#define INF 0x3f3f3f3f
#define MAXT 52
#define ii pair<ll,ll>
#define vi vector<int>
#define vvi vector<vi>
#define vii vector<ii>
#define vvii vector<vii>
#define eb emplace_back
#define fs first
#define sc second
#define ll long long

using namespace std;

ll n,l,c,mmc,ans,mmc_cand,big_mmc;

int main(){_
    cin>>n>>l;
    mmc = 1;
    for (int i=n; i--;){
        cin>>c;
        mmc = (mmc/__gcd(mmc,c)) * c;
    }
    for (ll i = 1; i <= l; i++){
        mmc_cand = (mmc/__gcd(mmc,i)) * i;
        if (mmc_cand > big_mmc && mmc_cand<=l){
            ans = i;
            big_mmc = mmc_cand;
        }
    }
    cout<<ans<<endl;
    return 0;
}

