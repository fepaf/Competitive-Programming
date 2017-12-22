// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Triângulo
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1929

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int l[4],i,j,k,ans;

int main(){_
	while (cin>>l[0]>>l[1]>>l[2]>>l[3]){
		ans=0;
		for (i=0;i<2;i++){
			for (j=i+1;j<3;j++){
				for (k=j+1;k<4;k++){
					ans|=(l[i]<l[j]+l[k])&&(l[j]<l[i]+l[k])&&(l[k]<l[j]+l[i]);
				}
			}
		}
		cout<<(ans ? "S" : "N")<<endl;
	}
	return 0;
}
