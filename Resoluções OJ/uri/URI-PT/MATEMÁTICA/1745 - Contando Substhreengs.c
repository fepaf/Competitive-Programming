// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Contando Substhreengs
// Nível: 4
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1745

#include<stdio.h>
#define ll long long
#define sp(i) qr[i]*(qr[i]-1)/2

int main(){
	ll int qr[3]={1,0,0},d,s=0,r=0;
	char c,a;
	while (scanf("%c",&c)&&(c!='\n')){
		d=c-'0';
		if ((0<=d)&&(d<=9)){
			s=(s+d)%3;
			qr[s]++;
		}
		else {
			r+=(sp(0)+sp(1)+sp(2));
			qr[0]=1,qr[1]=0,qr[2]=0;	
			s=0;
		}
		a=c;
	}
	r+=(a!='\n'? sp(0)+sp(1)+sp(2):0);
	printf("%lli\n",r);
	return 0;
}
