// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Polícia e Ladrão
// Nível: 3
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1905

#include<cstdio>
#include<stack>
#define branco 0
#define cinza 1
#define preto 2

using namespace std;

int t,i,j,k,mat[7][7],color[7][7],di[4]={-1,0,1,0},dj[4]={0,1,0,-1},a,b,found;
stack < pair<int,int> > dfs;

int main(){
	scanf("%i",&t);

	while (t--){
		for (i=1;i<=5;i++){
			for (j=1;j<=5;j++){
				scanf("%i",&mat[i][j]);
				color[i][j]=branco;
				mat[i][j]=1-mat[i][j];
			}
		}

		dfs.push(make_pair(1,1));
		color[1][1]=cinza;
		found=0;

		while (!dfs.empty()){
			i=dfs.top().first;
			j=dfs.top().second;
			dfs.pop();


			if (i==5 && j==5){
				found=1;
			}
			if (color[i][j]==preto) continue;

			for (k=0;k<4;k++){
				a=i+di[k];
				b=j+dj[k];
				if (color[a][b]==branco && mat[a][b]){
					dfs.push(make_pair(a,b));
					color[a][b]=cinza;
				}
			}

			color[i][j]=preto;
		}

		printf("%s\n",(found?"COPS":"ROBBERS"));
	}
	
	return 0;
}


