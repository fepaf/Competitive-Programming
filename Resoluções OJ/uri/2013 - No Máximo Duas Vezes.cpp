// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: No Máximo Duas Vezes
// Nível: 4
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2013

#include<bits/stdc++.h>
#define zerar() for (i=10;i--;) freq[i]=0;
#define _ ios_base::sync_with_stdio(false);

using namespace std;

int i,j,k,d,freq[10],x;
string u,l;

int main(){_
	cin>>l;
	for (i=0;i<l.length();i++){
		d=l[i]-'0';
		if ((++freq[d])>2){
			
			while (1){
				for (x=d,j=0;j<d;j++) if (freq[j]<2) x=j; //maior digito menor que d e com frequncia menor que 2
				
				freq[d]--;
				if (x==d){
					i--;
					d=l[i]-'0';
				}
				else {
					l[i]=x+'0';
					freq[x]++;
					break;
				}
			}
			
			for (j=i+1;j<l.length();j++){
				d=l[j]-'0';
				for (k=10;k--;){
					if (freq[k]<2){
						l[j]=k+'0';
						freq[k]++;
						break;
					}
				}
			}
			
			break;
		}
	}
	while (l[0]=='0') l.erase(0,1);
	
	cout<<l<<endl;	
	
	return 0;
}
