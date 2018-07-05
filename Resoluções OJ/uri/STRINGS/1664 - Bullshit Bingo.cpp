// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Bullshit Bingo
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1664

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);

using namespace std;

int mdc(int a,int b) {
	return (b==0? a: mdc(b,a%b));
}

string limpa(string s){
	while (ispunct(s[0])) s.erase(0,1);
	while (ispunct(s[s.length()-1])) s.erase(s.length()-1,s.length());
	for (int i=s.length();i--;) s[i]=tolower(s[i]);
	return s;
}

string s;
set <string> words;
int sum,games,a,b,g;
char c;

int main(){
	s="";
	while ((c=getchar())!=EOF){
		if (!isalpha(c)){
			if (s=="bullshit"){
				sum+=words.size();
				++games;
				words.clear();
			}
			else if(s.length()) words.insert(s);
			s="";
		}
		else s+=tolower(c);
	}
	g=mdc(sum,games);
	cout<<sum/g<<" / "<<games/g<<endl;
	return 0;
}
