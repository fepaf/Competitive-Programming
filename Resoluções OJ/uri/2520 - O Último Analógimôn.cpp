// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: O Último Analógimôn
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2520

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

int l1,l2,c1,c2,n,m,x;

int main(){_
    while (cin>>n>>m){
        for (int i=n;i--;){
            for (int j=m;j--;){
                cin>>x;
                if (x==1){
                    l1=i,c1=j;
                }
                else if(x==2) {
                    l2=i,c2=j;
                }
            }
        }
        cout<<abs(l1-l2)+abs(c1-c2)<<endl;
    }
    return 0;
}

