// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Eachianos I
// Nível: 5
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2593

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define vs vector<string>
#define vi vector<int>
#define eb emplace_back

using namespace std;

string texto,palavra;
int pos,n,t;
unordered_map <string, vi> loc;
stringstream ss;

int main(){_
	getline(cin,texto);
	for (pos=0, ss<<texto; ss>>palavra; pos+=palavra.size()+1){
		loc[palavra].eb(pos);
	}
	cin>>n;
	while (n--){
		cin>>palavra;
		if (t=loc[palavra].size()){
			cout<<loc[palavra][0];
			for (int i=1; i<t; i++){
				cout<<' '<<loc[palavra][i];
			}
		}
		else cout<<-1;
		cout<<endl;
	}
	return 0;
}
