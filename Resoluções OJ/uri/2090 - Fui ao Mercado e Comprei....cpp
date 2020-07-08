// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Fui ao Mercado e Comprei...
// Nível: 3
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2090

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAXN 100123

using namespace std;

string s[MAXN];
int n,k,i,r,pos;

string f(int k){
	for (int p=i=1;i<=n;i++){
		for (int j=0;j<i;j++,p++){
			if (p==k) return s[j];
		}
	}
}

int main(){_
	while((cin>>n>>k)&&(n||k)){
		for (i=0;i<n;i++) cin>>s[i];
		cout<<f(k)<<endl;
	}
	return 0;
}
