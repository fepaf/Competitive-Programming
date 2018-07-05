// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Transfira Para o Professor
// Nível: 3
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2563

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define INF 0x3f3f3f3f
#define MAX 102
#define EPS (1e-7)
#define MOD 1000000007
#define UNVISITED -1
#define VISITED 1
#define ull unsigned long long
#define ll long long
#define ii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vu vector<ull>
#define vs vector<string>
#define vl vector<ll>
#define vvi vector<vi>
#define vii vector<ii>
#define vd vector<double>
#define qi queue<int>
#define fs first
#define sc second
#define pb push_back
#define mp make_pair

using namespace std;

int p[MAX],d[MAX],best[MAX][MAX*MAX],n,k;

int main(){_
    while (cin>>n>>k){
        for (int i=1;i<=n;i++){
            cin>>d[i];
        }
        for (int i=1;i<=n;i++){
            cin>>p[i];
        }
        for (int i=k+1; i--;){
            best[0][i]=0;
        }
        for (int i=1;i<=n;i++){
            for (int j=0; j<=k; j++){
                if (j>=p[i]){
                    if (best[i-1][j-p[i]]+d[i]>best[i-1][j]){
                        best[i][j]=best[i-1][j-p[i]]+d[i];
                    }
                    else {
                        best[i][j]=best[i-1][j];
                    }
                }
                else {
                    best[i][j]=best[i-1][j];
                }
            }
        }
        cout<<best[n][k]<<endl;
        for (int i=1;i<=n;i++) for (int j=0; j<=k; j++) best[i][j]=0;
    }
    return 0;
}

