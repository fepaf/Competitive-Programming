// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Zerinho ou Um
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1467

#include<bits/stdc++.h>

using namespace std;

int a,b,c;

int main(){
	ios_base::sync_with_stdio(false);
	while (scanf("%i%i%i",&a,&b,&c)!=EOF)printf("%c\n",(a+b+c)%3==0?'*':'A'+(a==c)+2*(a==b));
	return 0;
}
