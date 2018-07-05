// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Quebra-cabeça
// Nível: 3
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1934

#include<bits/stdc++.h>
#define maxn 100
#define vazio 100000001

using namespace std;

int l,c,i,j,sl[maxn],sc[maxn],desc,coef,sum;
string puz[maxn][maxn];
map <string, int> val;
map <string, int>::iterator it;
set <string> var;
string x,y;

int main(){
	cin>>l>>c;
	for (i=0;i<l;i++){
		for (j=0;j<c;j++){
			cin>>puz[i][j];
			val[puz[i][j]]=vazio;
		}
		cin>>sl[i];
	}
	for (j=0;j<c;j++) cin>>sc[j];
	desc=val.size();
	while (desc){
		for (i=0;i<l;i++){
			coef=0, sum=sl[i];
			for (j=0;j<c;j++){
				x=puz[i][j];
				if (val[x]==vazio){
					var.insert(x);
					coef++;
					y=x;
				}
				else sum-=val[x];
			}
			if (var.size()==1){
				val[y]=sum/coef;
				desc--;
			}
			var.clear();
		}
		for (j=0;j<c;j++){
			coef=0, sum=sc[j];
			for (i=0;i<l;i++){
				x=puz[i][j];
				if (val[x]==vazio){
					var.insert(x);
					coef++;
					y=x;
				}
				else sum-=val[x];
			}
			if (var.size()==1){
				val[y]=sum/coef;
				desc--;
			}
			var.clear();
		}
	}
	for (it=val.begin();it!=val.end();it++) cout<<it->first<<" "<<it->second<<endl;
	return 0;
}

