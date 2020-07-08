// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Leitura Ótica
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1129

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);

using namespace std;

int n,i,cont,alt,r;

int main(){_
	
	while ((cin>>n) && n){
		while (n--){
			cont=0;
			for (i=0;i<5;i++){
				cin>>alt;
				if (alt<128) {
					r=i;
					cont++;
				}
			}
			printf("%c\n",(cont==1?'A'+r:'*'));
		}
	}
	return 0;
}
