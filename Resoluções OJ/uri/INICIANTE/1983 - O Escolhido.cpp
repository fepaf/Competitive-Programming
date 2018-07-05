// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: O Escolhido
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1983

#include<bits/stdc++.h>

using namespace std;

int n,m,chos;
float nota,maior=-1;

int main(){
	ios_base::sync_with_stdio(false);
	cin>>n;
	while (n--){
		cin>>m>>nota;
		if (nota>maior && nota>=8) maior=nota,chos=m;
	}	
	if (maior!=-1) cout<<chos<<endl;
	else cout<<"Minimum note not reached"<<endl;
	return 0;
}
