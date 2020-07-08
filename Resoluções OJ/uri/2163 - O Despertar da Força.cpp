// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: O Despertar da Força
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2163

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAX 1002
#define EPS (1e-7)
#define MOD 1000000007
#define UNVISITED -1
#define VISITED 1
#define ull unsigned long long
#define ll long long
#define ii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
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

int t[MAX][MAX],n,m,x,y,found;

int main(){_
    while (cin>>n>>m){
        for (int i=0;i<n;i++){
            for (int j=0;j<m;j++){
                cin>>t[i][j];
            }
        }
        x=y=0;
        for (int i=0;i<n;i++){
            for (int j=0;j<m;j++){
                found=1;
                for (int a=i-1;a<=i+1;a++){
                    for (int b=j-1;b<=j+1;b++){
                        found&=(a!=i || b!=j ? t[a][b]==7 : t[a][b]==42);
                    }
                }
                if (found){
                    x=i+1,y=j+1;
                }
            }
        }
        cout<<x<<" "<<y<<endl;
    }
    return 0;
}

