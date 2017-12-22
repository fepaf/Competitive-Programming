// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Containers
// Nível: 4
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2237

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAXN 40330
#define INF 1000000000

using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;

vi dist;
string p,perm[MAXN];
int o[1<<3],t[1<<3],cod,di[]={0,1,2,4,5,6,0,1,2,3,4},dj[]={1,2,3,5,6,7,4,5,6,7};
map<string,int> vert;



int dkt(int s){
	dist.assign(MAXN,INF); dist[s]=0;
	
	priority_queue<ii , vector<ii>, greater<ii> > pq; pq.push(make_pair(0,s));
	
	while (!pq.empty()){
		ii front=pq.top(); pq.pop();
		int d=front.first , u=front.second;
		
		if (d>dist[u]) continue;
		
		int ans=1;
		for (int i=8; i--;) ans&=(t[i]==o[perm[u][i]-'0']);
		if (ans) return d;
		
		for (int k=10;k--;){
			int w=o[perm[ u ][ di[k] ]-'0']+o[perm[ u ][ dj[k] ]-'0'];
			swap(perm[u][di[k]],perm[u][dj[k]]);
			int v=vert[perm[u]];

			if (dist[u]+w<dist[v]){
				dist[v]=dist[u]+w;
				pq.push(make_pair(dist[v],v));
			}
			
			swap(perm[u][di[k]],perm[u][dj[k]]);
		}
	}
}

int main(){_
	p="01234567";
	do{
		vert[p]=(++cod);
		perm[cod]=p;
	} while(next_permutation(p.begin(),p.end()));
	for (int i=0;i<8;i++) cin>>o[i];
	for (int i=0;i<8;i++) cin>>t[i];
	cout<<dkt(vert["01234567"])<<endl;
	return 0;
}
