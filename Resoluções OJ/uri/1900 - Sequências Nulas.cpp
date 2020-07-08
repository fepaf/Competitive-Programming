// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Sequências Nulas
// Nível: 4
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1900

#include<cstdio>
#include<map>
using namespace std;
map <long long, int> f;
map <long long, int>::iterator it;
long long n,v,s;
int main(){
	scanf("%lli",&n);
	f[0]=1;
	while (n--){
		scanf("%lli",&v);
		s+=v;
		if (f.find(s)==f.end()) f[s]=1;
		else f[s]++;
	}
	s=0;
	for (it=f.begin();it!=f.end();it++) s+=(long long)(it->second)*(it->second-1)/2;
	printf("%lli\n",s);
	return 0;
}

