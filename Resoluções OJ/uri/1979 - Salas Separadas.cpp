// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Salas Separadas
// Nível: 4
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1979

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl "\n"
#define MAXN 123
#define BRANCO -1
#define BLUE 1

using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

vi adj[MAXN],num;
int n,m,u,v;
string linha;

int bfs(int s){
	queue <int> fila;

	num[s]=BLUE;
	
	fila.push(s);
	while (!fila.empty()){
		int u=fila.front(); fila.pop();

		for (int i=0;i<adj[u].size();i++){
			int v=adj[u][i];
			
			if (num[v]==BRANCO){
				num[v]=num[u]^1;			
				fila.push(v);
			}
			else if (num[v]==num[u]) return 0;
		}
	}
	
	return 1;
}

int is_bi(int n){
	num.assign(n+1,BRANCO);
	for (int i=1;i<=n;i++) if (num[i]==BRANCO && !bfs(i)) return 0;
	num.clear();
	return 1;
}


int main(){_

	while ((cin>>n)&&n){
		for (int i=n;i--;){
			cin>>u;
			cin.ignore();
			getline(cin,linha);
			stringstream ss(linha);
			while (ss>>v){
				adj[u].push_back(v);
				adj[v].push_back(u);
			}
		}
		cout<<(is_bi(n)? "SIM" : "NAO")<<endl;
		for (int i=n+1;i--;)adj[i].clear();
	}

	return 0;
}
