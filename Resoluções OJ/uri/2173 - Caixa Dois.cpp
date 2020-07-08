// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Caixa Dois
// Nível: 5
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2173

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAXM 100123

using namespace std;

typedef vector<int> vi;
struct aresta{
	int u,v,c;
};
int n,m,u,v,c,i,j,k,ma,me;
vi paia,paib,tama,tamb;
aresta a[MAXM];

bool cmp(aresta a, aresta b){return a.c<b.c;}

int ida(int n){return paia[n]!=n ? paia[n]=ida(paia[n]) : paia[n];}

void joina(int u, int v){
	u=ida(u),v=ida(v);
	if (u==v) return;
	if (tama[u]<tama[v]) swap(u,v);
	paia[v]=u;
	tama[u]+=tama[v];
}

void inita(int n){
	tama.assign(n+1,1); paia.clear();
	for (int i=0;i<=n;i++) paia.push_back(i);
}

int idb(int n){return paib[n]!=n ? paib[n]=idb(paib[n]) : paib[n];}

void joinb(int u, int v){
	u=idb(u),v=idb(v);
	if (u==v) return;
	if (tamb[u]<tamb[v]) swap(u,v);
	paib[v]=u;
	tamb[u]+=tamb[v];
}

void initb(int n){
	tamb.assign(n+1,1); paib.clear();
	for (int i=0;i<=n;i++) paib.push_back(i);
}


int main(){_
	while ((cin>>n>>m)&&(n||m)){
		inita(n), initb(n);

		for (i=m;i--;){cin>>a[i].u>>a[i].v>>a[i].c;}

		sort(a,a+m,cmp);

		ma=me=0;
		 
		for (i=0;i<m;i++){

			if (ida(a[i].u)!=ida(a[i].v)){
				joina(a[i].u,a[i].v);
				me+=a[i].c;
			}
			
			if (idb(a[m-i-1].u)!=idb(a[m-i-1].v)){
				joinb(a[m-i-1].u,a[m-i-1].v);
				ma+=a[m-i-1].c;
			}			
		}
		cout<<ma-me<<endl;
	}
	return 0;
}
