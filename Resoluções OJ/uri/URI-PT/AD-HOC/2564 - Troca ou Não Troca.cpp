// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Troca ou Não Troca
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2564

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
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

int n,p,r,achou,ans;

int main(){_
    while(cin>>n){
        achou=0;
        for (int i=n-1;i--;){
            cin>>p>>r;
            if (p==n){
                achou=1;
                ans=(!r);
            }
            else ans+=achou*r;
        }
        cout<<ans<<endl;
    }
    return 0;
}

