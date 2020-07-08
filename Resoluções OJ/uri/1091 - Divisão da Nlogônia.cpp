// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Divisão da Nlogônia
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1091

#include<stdio.h>

int k,n,m,x,y,dx,dy;

main (){
	while (1){
		scanf("%i",&k);
		if (!k) break;
		scanf("%i %i",&n,&m);
		while (k--){
			scanf("%i %i",&x,&y);
			dx=x-n , dy=y-m;
			if ((!dx)||(!dy)) printf("divisa\n");
			if (dx*dy>0){
				if (dy>0) printf("NE\n");
				else printf("SO\n");
			}
			if (dx*dy<0) {
				if (dy>0) printf("NO\n");
				else printf("SE\n");
			}
		}
	}
	return 0;
}
