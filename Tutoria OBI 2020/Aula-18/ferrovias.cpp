#include<bits/stdc++.h>
#define _ ios_base::sync_with_studio(0);
#define endl '\n'
#define i64 long long
#define vi vector<int>
#define eb emplace_back
#define MAX 1000123
#define DEBUG 0

using namespace std;

struct taresta{
	int u,v;
	i64 w;
};

int pai[MAX];

int cmp(taresta a, taresta b){
	return a.w < b.w;
}

int id(int n){
	return n == pai[n] ? pai[n] : (pai[n] = id(pai[n])); 
}

void join(int u, int v){
	pai[id(v)] = id(u);
}

int n, m, k, total, comp, c[1<<9][1<<9];
taresta arestas[MAX];
i64 ans;

int main(){

	while (cin >> n){
		ans = 0;
		
		for (int i = 0; i <= n; ++i){
			pai[i] = i;
		}
		
		for (int i=0; i<n; ++i){
			for (int j=0; j<n; ++j){
				cin >> c[i][j];
			}
		}
		
		
		k = 0;
		for (int i=0; i<n; ++i){
			for (int j=i+1; j<n; ++j){
				arestas[k].u = i;
				arestas[k].v = j;
				arestas[k].w = c[i][j] * (c[j][i] ? -1 : 1);
				
				ans += c[i][j] * c[j][i];
				
				++k;
			}
		}
		
		
		sort(arestas, arestas+k, cmp);
		
		
		comp = n;
		for (int i=0; i<k && comp>1; ++i){
			if (id(arestas[i].u) != id(arestas[i].v)){
				join(arestas[i].u, arestas[i].v);
				ans += arestas[i].w;
				--comp;
			}
		}
		cout << ans << endl;
		
	}
	return 0;
}
