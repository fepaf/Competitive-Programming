// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Spurs Rocks
// Nível: 2
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1303

#include<cstdio>
#include<algorithm>
#define ini(v,tam) for (int i=tam;i--;) v[i].pc=tam-1, v[i].pf=v[i].ps=0;
#define avg(x) (x.ps==0 ? x.pf: x.pf/x.ps)

using namespace std;

typedef struct tipo{
	int ins;
	float pc,pf,ps;
}tipo;

tipo t[100];

bool cmp(tipo a, tipo b){
	if (a.pc==b.pc)
		if (avg(a)==avg(b))
			if (a.pf==b.pf) return a.ins < b.ins;
			else return a.pf > b.pf ;
		else return avg(a) > avg(b);
	else return a.pc > b.pc;		
}

int main(){
	int n,h=0,x,z;
	float y,w;
	
	while (scanf("%i",&n) && n){
		ini(t,n);
		
		for (int i=(n*(n-1)/2);i--;){
			scanf("%i %f %i %f",&x,&y,&z,&w);
			t[--x].ins=x+1, t[--z].ins=z+1;
			t[x].pf+=y , t[x].ps+=w;
			t[z].pf+=w , t[z].ps+=y;
			t[(y>w ? x:z)].pc++;
		}
		
		sort(t,t+n,cmp);
		
		if (h) printf("\n");
		printf("Instancia %i\n",++h);
		printf("%i",t[0].ins);
		for (int i=1;i<n;i++) printf(" %i",t[i].ins);
		printf("\n");
	}
	
	return 0;
}
