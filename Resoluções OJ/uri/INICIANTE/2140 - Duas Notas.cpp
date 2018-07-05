// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Duas Notas
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2140

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int n,m,nota[]={2,5,10,20,50,100};

int main(){_
	while ((cin>>n>>m)&&(n||m)){
			int ans=0;
			for (int i=0;i<5;i++){
				for (int j=i+1;j<6;j++){
					ans|=(nota[i]+nota[j]==m-n);
				}
			}
			cout<<(ans ? "possible" : "impossible")<<endl;
	}
	return 0;
}

