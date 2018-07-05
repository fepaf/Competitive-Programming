// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Huaauhahhuahau
// Nível: 1
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2242

#include<bits/stdc++.h>

using namespace std;

string s,ans,rev;

int main(){
	while (cin>>s){
		ans="";
		for (int i=0;i<s.size();i++) if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u') ans+=s[i];
		rev=ans;
		reverse(rev.begin(),rev.end());
		cout<<( ans==rev ? "S" : "N")<<endl;
	}
	return 0;
}
