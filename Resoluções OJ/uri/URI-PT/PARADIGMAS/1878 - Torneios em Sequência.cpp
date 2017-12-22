// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Torneios em Sequência
// Nível: 2
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1878

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define INF 0x3f3f3f3f3f
#define ii pair<ll,int>
#define vi vector<ll>
#define vvi vector<vi>
#define eb emplace_back
#define fs first
#define sc second
#define ll long long
#define MAX (1<<10)

using namespace std;

int t,n,m,c[3];
set<int> cj;

int comb(int n, int k){
    int ans=1;
    for (int i=1;i<=k;i++){
        ans *= (n-k+i);
        // ans /= i;
    }
    return ans;
}

int main(){_
    while (cin>>n>>m){
        for (int i=n;i--;   ){
            cin>>c[i];
        }
        if (n==1){
            for (int i=1;i<=m;i++){
                cj.insert(c[0]*i);
            }
        }
        else if (n==2){
            for (int i=1;i<=m;i++){
                for (int j=1;j<=m;j++){
                    if (i==j)continue;
                    cj.insert(c[0]*i+c[1]*j);
                }
            }
        }
        else {
            for (int i=1;i<=m;i++){
                for (int j=1;j<=m;j++){
                    if (i==j)continue;
                    for (int k=1;k<=m;k++){
                        if (j==k || i==k) continue;
                        cj.insert(c[0]*i+c[1]*j+c[2]*k);
                    }
                }
            }
        }
        cout<<(cj.size() == comb(m,n) ? "Lucky Denis!" : "Try again later, Denis...")<<endl;
        cj.clear();
    }
    return 0;
}

