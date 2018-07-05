// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Torneio de Pomekon
// Nível: 3
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2224

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAXN 16
#define INF (1ULL<<50)
#define ii pair<int, int>
#define vd vector<double>
#define vii vector<ii>
#define fs first
#define sc second

using namespace std;

int t,x,y,n;
vector< ii > pont;
vector<double> memo;

double solve(int mask){
    double ans=INF,atual;

    if (mask == (1<<n)-1) return 0;

    if (memo[mask]!=-1) return memo[mask];

    for (int i=0;i<n-1;i++){
        for (int j=i+1;j<n;j++){
            if (!((mask & (1<<i)) || (mask & (1<<j)))){
                atual = hypot(pont[i].fs-pont[j].fs, pont[i].sc-pont[j].sc);
                ans = min(ans, atual + solve(mask | (1<<i) | (1<<j)));
            }
        }
    }

    return memo[mask]=ans;
}

int main(){_
    for (cin>>t; t--;){
        cin>>n;
        pont = vii(n+1,ii(0,0));
        memo = vd((1<<n)+10, -1);
        for (int i=0;i<n;i++){
            cin>>pont[i].fs>>pont[i].sc;
        }
        cout<<fixed<<setprecision(2)<<solve(0)<<endl;
    }
    return 0;
}

