// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Rede do DINF
// Nível: 3
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2522

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAX 100003
#define EPS (1e-9)
#define MOD 1000000007
#define UNVISITED -1
#define VISITED 1
#define ull unsigned long long
#define ll long long
#define ii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vvi vector<vi>
#define vii vector<ii>
#define vd vector<double>
#define qi queue<int>
#define fs first
#define sc second
#define pb push_back

using namespace std;

struct aresta{
	int u,v;
	double w;
};

struct pont{double x,y;};

vi pai,tam;
int c,n,u,v,m;
vector<pont> p;
vector<aresta> a;
double ans,w,x,y;

bool cmp(aresta a, aresta b){ return a.w<b.w;}

int id(int n){return n!=pai[n] ? pai[n]=id(pai[n]) : pai[n];}

void join(int u, int v){
	u=id(u), v=id(v);
	if (tam[u]<tam[v]) swap(u,v);
	pai[v]=u;
	tam[u]+=tam[v];
}

void init(int n){
	tam = vi(n,1);
	pai.clear();
	for (int i=0;i<n;i++) pai.pb(i);
}

int main(){_
	while (cin>>n){
		init(n+1);
		for (int i=0;i<n;i++){
			cin>>x>>y;
			p.pb({x,y});
			for (int j=i-1;j>=0;j--) a.pb({i,j,hypot(x-p[j].x,y-p[j].y)});
		}
		sort(a.begin(),a.end(),cmp);
		m=a.size(); ans=0;
		for (int i=0, j=0; i<m && j<n-1; i++){
			u=id(a[i].u), v=id(a[i].v), w=a[i].w;
			if (u!=v){
				join(u,v);
				j++;
				ans+=w;
			}
		}
		printf("%.2lf\n",ans);
		p.clear(), a.clear();
	}
    return 0;
}

