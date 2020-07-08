// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Fila do SUS
// Nível: 3
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2506

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define INF 2000000123
#define MAX 2002
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

int n,h,m,c,ta,ans,t;

int main(){_
		while (cin>>n){
			ans=0;
			ta = 420;
			while (n){
				cin>>h>>m>>c;
				t=h*60+m;
				while (ta<t) ta+=30;
				ans+=(ta-t>c);
				--n;
				ta+=30;
			}
			cout<<ans<<endl;
		}
    return 0;
}

