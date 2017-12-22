// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Frase Completa
// Nível: 3
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1551

#include<bits/stdc++.h>
#include<cctype>
#define _ ios_base::sync_with_stdio(false);
#define zerar(v,tam) for (int i=tam;i--;) v[i]=0;

using namespace std;

int n,i,cont,freq[26];
string s;

int main(){_
	cin>>n;
	getline(cin,s);
	while (n--){
		zerar(freq,26);
		getline(cin,s);
		for (i=s.length();i--;){
			if (isalpha(s[i])) freq[tolower(s[i])-'a']++;
		}
		
		for (cont=0,i=26;i--;) cont+=(freq[i]!=0) ;
				
		if (cont==26) cout<<"frase completa"<<endl;
		else if (cont>=13) cout<<"frase quase completa"<<endl;
		else cout<<"frase mal elaborada"<<endl;
	}
	return 0;
}
