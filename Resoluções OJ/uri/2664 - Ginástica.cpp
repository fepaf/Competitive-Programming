// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Ginástica
// Nível: 5
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2664

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

ll memo[MAXT][MAX],n,m,t,ans;

ll f(int tempo, int nivel){
    if (nivel<m || nivel>n) return 0;
    if (tempo == 1) return 1;
    if (memo[tempo][nivel]!=-1) return memo[tempo][nivel];
    return memo[tempo][nivel] = (f(tempo-1,nivel-1)+f(tempo-1,nivel+1))%MOD;
}

int main(){
    cin>>t>>m>>n;
    memset(memo,-1,sizeof(memo));
    for (int i=m; i<=n; i++) ans+=f(t,i);
    cout<<ans%MOD<<endl;
}

