// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Diferença Fácil Entre Datas
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2315

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int mes[12]={31,28,31,30,31,30,31,31,30,31,30,31},acum[12],ans,d,m,i;

int main(){_
	for (i=1;i<12;i++) acum[i]=acum[i-1]+mes[i-1];
	cin>>d>>m;
	ans+=-d-acum[m-1];
	cin>>d>>m;
	ans+=+d+acum[m-1];
	cout<<ans<<endl;
    return 0;
}
