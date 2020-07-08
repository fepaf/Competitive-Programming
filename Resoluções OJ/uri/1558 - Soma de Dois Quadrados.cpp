// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Soma de Dois Quadrados
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1558

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

int n,ans;

int main(){_
    while (cin>>n){
        ans=0;
        for (int i=100;i--;){
            for (int j=100;j--;){
                if (i*i+j*j==n){
                    ans=1;
                    break;
                }
            }
        }
        cout<<(ans ? "YES" : "NO")<<endl;
    }
    return 0;
}

