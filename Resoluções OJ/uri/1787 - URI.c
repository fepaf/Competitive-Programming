// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: URI
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1787

#include<stdio.h>
#define max(x,y,z) (x>y && x>z ? 0:(y>z?1:2))

int ui,ri,ii,n,v[3],big,only;
char nome[3][11]={"Uilton","Rita","Ingred"};

int main(){
	while (scanf("%i",&n) && n){
		while (n--){
			scanf("%i %i %i",&ui,&ri,&ii);
			big = max(ui,ri,ii);
			v[0]+=((!(ui & (ui-1))) + (big==0)*(!(ui & (ui-1))));
			v[1]+=((!(ri & (ri-1))) + (big==1)*(!(ri & (ri-1))));
			v[2]+=((!(ii & (ii-1))) + (big==2)*(!(ii & (ii-1))));
		}
		big=max(v[0],v[1],v[2]);
		only=((v[big]==v[0])+(v[big]==v[1])+(v[big]==v[2]));
		printf("%s\n",( only==1 ? nome[big]:"URI"));
		v[0]=v[1]=v[2]=0;
	}
	return 0;
}
