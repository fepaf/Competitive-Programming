// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Teletransporte
// Nível: 5
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1713

/*
Problema: Teletransporte 
OJ : URI
Visto pela primeira vez na maratona brasileria de progrmação em 2014
Resovlido: 
*/
#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define INF ((int(10e9))<<1)+111
#define MOD 10000
#define UNVISITED -1
#define VISITED 1
#define ull unsigned long long
#define ii pair<int, int>
#define vi vector<int>
#define vii vector<ii>
#define vd vector<double>
#define qi queue<int>
#define fs first
#define sc second

using namespace std;

struct matrix{
	ull m[100][100];
};


matrix nula,ident;
matrix adj;
int n, s, t, l, a, b, c, d;

matrix mult(matrix a, matrix b, ull mod){
	matrix ans;
	
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			ans.m[i][j]=0ULL;
			for (int k=0; k<n; k++){
				ans.m[i][j] += (a.m[i][k]*b.m[k][j]);
			}
			ans.m[i][j] %= mod;
		}
	}
	
	return ans;
}

matrix fpow(matrix b, ull e, ull m){
    matrix ans;
    for (ans=ident; e; b=mult(b,b,m), e>>=1) if (e&1) ans=mult(ans,b,m);
    return ans;
}

matrix ways;

int main(){_
	for (int i=0; i<100; i++) ident.m[i][i]=1ULL;
	while (cin>>n>>l>>s>>t){
		adj = nula;
		for (int i=0; i<n; i++){
			cin>>a>>b>>c>>d;
			adj.m[i][a-1]++;
			adj.m[i][b-1]++;
			adj.m[i][c-1]++;
			adj.m[i][d-1]++;			
		}
		ways = fpow(adj,l,MOD);
		cout<<ways.m[s-1][t-1]<<endl;
	}
    return 0;
}

