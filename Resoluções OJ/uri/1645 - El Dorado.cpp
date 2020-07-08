// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: El Dorado
// Nível: 3
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1645

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAX 102
#define MOD int(10e9)+7
#define UNVISITED -1
#define VISITED 1
#define ull unsigned long long
#define ll long long
#define ii pair<int, int>
#define vi vector<int>
#define vii vector<ii>
#define vd vector<double>
#define qi queue<int>
#define fs first
#define sc second

using namespace std;

ll pd[MAX][MAX];
ll a[MAX], p, q, r, n, k, ans;

int main(){_
    while ((cin>>n>>k)&&(n||k)){
        for (p=1; p<=n; p++){
            cin>>a[p];
            /*pd[p][1]=1ULL;
            for (q=2; q<=k; q++) pd[p][q]=0ULL;*/
        }

        for (p=1; p<=n; p++) for (q=1; q<=k; q++) pd[p][q]=0;

        for (p=1; p<=n; p++) pd[p][1]=1;

        for (p=1; p<=n; p++){
            for (q=1; q<p; q++){
                if (a[p]>a[q]){
                    for (r=2; r<=k; r++){
                        pd[p][r] += pd[q][r-1];
                    }
                }
            }
        }

        for (ans=0,p=1; p<=n; p++) ans+=pd[p][k];
        cout<<ans<<endl;
    }
    return 0;
}

