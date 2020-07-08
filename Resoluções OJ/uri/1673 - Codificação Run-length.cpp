// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Codificação Run-length
// Nível: 2
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1673

#include<bits/stdc++.h>
#define maxn 1000123
#define _ ios_base::sync_with_stdio(false);

using namespace std;

string s,c;
int t,tam,f,i,j;
vector<int> freq;

int main(){_
	while (getline(cin,s)){
		t=s.length();
		freq.erase(freq.begin(),freq.end());
		for (c="",i=0;i<t;i++){
			c+=s[i++];
			for (f=1; i<t && s[i]==s[i-1]; i++,f++);
			i--;
			freq.push_back(f);
		}
		t=freq.size();
		for (i=0;i<t;i++){
			for (j=0; j<freq[i]/9; j++) cout<<"9"<<c[i];
			freq[i]%=9;
			for (s="";i<t && freq[i]==1;i++){
				if (c[i]=='1')	s+="11";
				else s+=c[i];
			}
			if (s.length()){
				cout<<"1"<<s<<"1";
				i--;
				continue;
			}
			if (i<t && freq[i]) cout<<freq[i]<<c[i];
		}
		cout<<endl;
	}
	return 0;
}
