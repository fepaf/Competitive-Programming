// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Triângulos
// Nível: 3
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1472

#include<bits/stdc++.h>
#define maxn 112345

using namespace std;

int n,x,i,j,k,soma[maxn],sum,resp,len;

int main(){
	ios_base::sync_with_stdio(false);
	while (cin>>n){
		resp=sum=0;
		for (i=0;i<n;i++){
			cin>>x;
			sum+=x;
			soma[i]=sum;
		}
		len=soma[n-1]/3;
		j=k=0;
		for (i=0;soma[i]+2*len<=soma[n-1];i++){
			while (soma[j]<soma[i]+len) j++;
			while (soma[k]<soma[i]+2*len) k++;
			resp+=(soma[j]==soma[i]+len && soma[k]==soma[i]+2*len);
		}
		cout<<(soma[n-1]%3?0:resp)<<endl;
	}
	return 0;
}
