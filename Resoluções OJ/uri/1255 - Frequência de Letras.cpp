// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Frequência de Letras
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1255

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);

using namespace std;

string s;
int i,n,maior,freq[26];

int main(){_
	cin>>n;
	getline(cin,s);
	while (n--){
		getline(cin,s);
		for (maior=0,i=s.length();i--;){
			if (isalpha(s[i])){
				++freq[tolower(s[i])-'a'];
				maior=max(maior,freq[tolower(s[i])-'a']);
			} 
		}
		for (i=0;i<26;i++){
			if (freq[i]==maior) printf("%c",i+'a');
			freq[i]=0;
		} 
		printf("\n");
	}
	return 0;
}

