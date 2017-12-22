// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Lendo Livros
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1542

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'

using namespace std;

int q,d,p,ans;

int main(){_
	while ((cin>>q)&&q){
		cin>>d>>p;
		ans=(q*d*p)/(p-q);
		cout<<ans<<" pagina"<<(ans-1? "s":"")<<endl;
	}

	return 0;
}
