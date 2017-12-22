// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Blobs
// Nível: 1
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1170

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int n,ans;
double c;

int main(){_
	cin>>n;
	while (n--){
		cin>>c;
		ans=ceil(log2(c));
		cout<<ans<<" dias"<<endl;
	}
	return 0;
}
