// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Produção Ótima de Ótima V...
// Nível: 5
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1210

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAX 2002
#define MOD int(10e9)+7
#define UNVISITED -1
#define VISITED 1
#define ii pair<int, int>
#define vi vector<int>
#define vii vector<ii>
#define vd vector<double>
#define qi queue<int>
#define fs first
#define sc second

using namespace std;

int memo[MAX][MAX], pd[MAX][MAX], t[MAX][MAX], v[MAX], c[MAX], n, m, i, p, k, l,year, age, keep, sail, ntrade;

int solve(int ano, int idd){
    if (ano==n+1) return 0;
    if (memo[ano][idd]!=-1) return memo[ano][idd];
    if (idd==m) return memo[ano][idd] = p+c[0]-v[idd]+solve(ano+1, 1);
    return memo[ano][idd] = min(c[idd]+solve(ano+1,idd+1), c[0]+p-v[idd]+solve(ano+1,1));
}

int main(){_
    while (cin>>n>>i>>m>>p){
        for (int k=0; k<m; k++) cin>>c[k];
        for (int k=1; k<=m; k++) cin>>v[k];

        for (int k=0; k<=n; k++) for (int l=0; l<=m; l++) memo[k][l]=-1 , t[k][l]=0;

        for (int k=0; k<=m; k++) pd[n+1][k] = 0;

        for (year=n; year>=1; year--){
            for (age=0; age<m; age++){
                keep = c[age]+pd[year+1][age+1];
                sail = p+c[0]-v[age]+pd[year+1][1];
                if (keep < sail){
                    pd[year][age] = keep;
                    t[year][age] = 0;
                }
                else {
                    pd[year][age] = sail;
                    t[year][age] = 1;
                }
            }
            sail = p+c[0]-v[age]+pd[year+1][1];
            pd[year][age] = sail;
            t[year][age] = 1;
        }

        cout<<pd[1][i]<<endl;
        ntrade = 1;
        for (age=i, year=1; year<=n; year++){
            if (t[year][age]){
                cout<<(ntrade ? "" : " " )<<year;
                ntrade = 0;
                age = 1;
            }
            else age++;
        }
        cout<<(ntrade ? "0" : "" )<<endl;
    }
    return 0;
}

