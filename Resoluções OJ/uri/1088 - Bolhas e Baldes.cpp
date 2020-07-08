// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Bolhas e Baldes
// Nível: 3
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1088

#include<stdio.h>
#define max 100000

int p[max],q[max],n,i;

long long int merge(int *x,int *y,int beg,int med,int end){
	int i,j,k;
	long long int c=0;
	
	for (i=beg;i<=med;i++)
		y[i]=x[i];

	for (i=med+1;i<=end;i++)
		y[end+med+1-i]=x[i];
	
	i=beg;
	j=end;
	
	for (k=beg;k<=end;k++){
		if (y[i]<=y[j]){
			x[k]=y[i];
			i++;
		}
		else {
			x[k]=y[j];
			j--;
			c+=(med-i+1);
		}
	}
	
	return c;
}

long long int count(int *x,int *y,int beg,int end){
	int med;
	if (beg>=end){
		return 0;
	}
	else {
		med=(beg+end)/2;
		return count(x,y,beg,med) + count(x,y,med+1,end) + merge(x,y,beg,med,end);
	}
}

main(){
	int t;
	for (t=1;;t++){
		scanf("%i",&n);
		
		if (!n) break;
		
		for (i=0;i<n;i++)
			scanf("%i",&p[i]);
		
		printf("%s\n",((count(p,q,0,n-1)%2)?"Marcelo":"Carlos"));
	}
	return 0;
}
