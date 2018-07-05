// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Batalha Naval
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2371

#include<stdio.h>
#include<string.h>
#define inf -1
 
int n,m,i,j,k,l,c,res=0,mar[100][100],vis[100][100],tam[10000];
int dx[]={-1,0,1,0},dy[]={0,-1,0,1};
char ch;
 
void work(int a,int b,int n){
	int i;
	if ((mar[a][b])&&(!vis[a][b])){
		tam[n]++;
		mar[a][b]=n;
		vis[a][b]=1;
		
		for (i=0;i<4;i++){
			if ((a+dy[i]>-1)&&(a+dy[i]<100)&&(b+dx[i]>-1)&&(b+dx[i]<100)) work(a+dy[i],b+dx[i],n);
		}
	}
}
 
main (){
	scanf("%i %i",&n,&m);
	
	for (i=0;i<n;i++){
		for (j=0;j<m;j++){
			scanf(" %c",&ch);
			if (ch=='#') mar[i][j]=1;
		}	
	}
	
	k=1;
	for (i=0;i<n;i++){
		for (j=0;j<m;j++){
			if ((mar[i][j])&&(!vis[i][j])){
				tam[k]=0;
				work(i,j,k++);
			}
		}
	}
	
	tam[0]=10001;
	
	scanf("%i",&k);
	
	while (k--){
		scanf("%i %i",&l,&c);
		l-- , c--;
		tam[mar[l][c]]--;
		if (!tam[mar[l][c]]) res++;
	}
	
	printf("%i\n",res);
	
	return 0;
}
 
