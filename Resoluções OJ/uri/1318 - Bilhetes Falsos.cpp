// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Bilhetes Falsos
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1318

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAX 100123
#define EPS (1e-7)
#define MOD 1000000007
#define UNVISITED -1
#define VISITED 1
#define ull unsigned long long
#define ll long long
#define ii pair<int, int>
#define vi vector<int>
#define vvi vector<vi>
#define vii vector<ii>
#define vd vector<double>
#define qi queue<int>
#define fs first
#define sc second
#define pb push_back

using namespace std;

int n,m,t,ans;
vi f;

int main(){_
    while ((cin>>n>>m)&&(n||m)){
        f = vi(n+1,0);
        for (int i=m;i--;){
            cin>>t;
            f[t]++;
        }
        ans=0;
        for (int i=1;i<=n;i++){
            ans+=(f[i]>1);
        }
        cout<<ans<<endl;
    }
    return 0;
}

