// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Reduzindo Detalhes em um ...
// Nível: 5
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2404

#include <stdio.h>
#include <algorithm>
using namespace std;
#define MAX_VERTICES 500
#define MAX_ARESTAS ((MAX_VERTICES * (MAX_VERTICES - 1)) / 2)
typedef struct Aresta Aresta;
 
struct Aresta{
	int u, v, /* aresta uv */
	c; /* peso da aresta */
};
 
int N, M,
id_comp[MAX_VERTICES],
tam_comp[MAX_VERTICES];
Aresta E[MAX_ARESTAS];
 
int componente (int u){
	if (id_comp[u] != u) return id_comp[u] = componente(id_comp[u]);
	return u;
}
 
void una_componentes_de (int u, int v) {
	int c1 = componente (u);
	int	c2 = componente (v);
	
	if (tam_comp[c1] > tam_comp[c2]){
		tam_comp[c1] += tam_comp[c2];
		id_comp[c2] = c1;
	}
	else{
		tam_comp[c2] += tam_comp[c1];
		id_comp[c1] = c2;
	}
}
 
bool cmp_arestas (const Aresta e1, const Aresta e2){
	return e1.c < e2.c;
}
 
main (){
	int i, ret = 0, k;
	
	scanf ("%d %d", &N, &M);
	
	for (i = 0; i < N; i++) id_comp[i] = i, tam_comp[i] = 1;
	
	for (i = 0; i < M; i++){
		scanf ("%d %d %d", &E[i].u, &E[i].v, &E[i].c);
		E[i].u--; E[i].v--;
	}
	
	sort (E, E + M, cmp_arestas);
	
	for (i = 0, k = 1; k < N && i < M; i++)
		if (componente(E[i].u) != componente(E[i].v)){
			una_componentes_de (E[i].u, E[i].v);
			ret += E[i].c;
			k++;
		}
	
	printf ("%d\n", ret);
	
	return 0;
}
