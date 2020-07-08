// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: A Pedra Filosofal
// Nível: 4
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1838

#include<cstdio>
#include<algorithm>
#define maxn 1123
#define max(a,b) (a>b?a:b);

using namespace std;

typedef struct task{
	int s,f;
}task;

bool cmp(task a,task b){
	if (a.f==b.f) return a.s<b.s;
	else return a.f<b.f;
}

int n,i,j,r,pd[maxn],ant[maxn],a,b;
task t[maxn];

int main(){
	
	scanf("%i",&n);
	
	t[0].s=t[0].f=0;
	
	for (i=1;i<=n;i++) scanf("%i %i",&t[i].s,&t[i].f);
	
	sort(t,t+n+1,cmp);
	
	for (i=1;i<=n;i++){
		ant[i]=0;
		for (j=i-1;j>=1;j--) {
			if (t[j].f<=t[i].s){
				ant[i]=j;
				break;
			}
		}
	} 
	
	pd[0]=0;
	
	for (i=1;i<=n;i++) pd[i]=max(pd[i-1],pd[ant[i]]+t[i].f-t[i].s);
	
	printf("%i\n",pd[n]);
	return 0;
}
