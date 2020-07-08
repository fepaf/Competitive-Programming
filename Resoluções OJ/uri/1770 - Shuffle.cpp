// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Shuffle
// Nível: 3
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1770

#include<cstdio>
#include<set>
#define ini() for(i=m;i--;) dur[i]=0
using namespace std;

int main(){
	int m,k,dur[100],i,x,sum;
	set <int> toc;
	while (scanf("%i %i",&m,&k)!=EOF){
		sum=0;
		ini();
		for(i=m;i--;) scanf("%i",&dur[m-i-1]);
		for(i=k;i--;){
			scanf("%i",&x);
			if (toc.size()!=m) sum+=dur[x-1];
			toc.insert(x);
		}
		printf("%i\n",(toc.size()==m?sum:-1));
		toc.clear();
	}
	return 0;
}

