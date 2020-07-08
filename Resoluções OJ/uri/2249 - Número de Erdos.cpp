// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Número de Erdos
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2249

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAXN 1<<10

using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;

vi adj[MAXN],u,dist;
map<string,int> vert;
map<string,int>::iterator it;
int a,cod,i,j,tam,x,s,caso;
string linha,nome,snome;
stringstream ss;

void bfs(int s){
	int u,v;
	queue <int> fila; fila.push(s);
	dist.assign((int)vert.size()+1,-1); dist[s]=0;
	while (!fila.empty()){
		u=fila.front(); fila.pop();
		tam=adj[u].size();
		for (i=tam;i--;){
			v=adj[u][i];
			if (dist[v]==-1){
				dist[v]=dist[u]+1;
				fila.push(v);
			}
		}
	}
}

int main(){_	
	while ((cin>>a)&&a){
		cod=1;
		getline(cin,linha);
		while (a--){
			getline(cin,linha); ss.clear(); ss<<linha;
			while (ss>>nome){
				ss>>snome;
				snome=snome.erase(snome.size()-1,snome.size());
				snome+=" "+nome;
				x= vert[snome] ? vert[snome] :  vert[snome]=(cod++);
//				cout<<" ->> "<<snome<<" : "<<x<<endl;
				u.push_back(x);
			}
			tam=(int)u.size();
			for (i=0;i<tam;i++){
				for (j=0;j<tam;j++){
					if (i==j) continue;
					adj[u[i]].push_back(u[j]);
				}
			}
			u.clear();
		}
//		for (it=vert.begin(); it!=vert.end(); it++) cout<<it->first<<" : "<<it->second<<endl;
		bfs(vert["Erdos P."]);
		adj[vert["Erdos P."]].clear();vert.erase("Erdos P.");
		cout<<"Teste "<<++caso<<endl;
		for (it=vert.begin(); it!=vert.end(); it++){
			cout<<it->first.substr(it->first.size()-2,2)<<" "<<it->first.substr(0,it->first.size()-3)<<": ";
			if (dist[it->second]!=-1) cout<<dist[it->second]<<endl;
			else cout<<"infinito"<<endl;
			adj[it->second].clear();
		}
		cout<<endl;
		vert.clear();
	}
	return 0;
}
