// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Último Dano
// Nível: 3
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1627

#include<bits/stdc++.h>

using namespace std;

int hit[2],delay[2],h,t,d,guy;

typedef pair<int,int> ii;

priority_queue<ii , vector<ii>, greater<ii> > pq;

int main(){
	cin>>t;
	while (t--){
		cin>>hit[0]>>delay[0]>>hit[1]>>delay[1]>>h;
		if ((h-=hit[0])<=0) guy=0;
		else if ((h-=hit[1])<=0) guy=1; 		
		else {
			pq.push(make_pair(delay[0],0));
			pq.push(make_pair(delay[1],1));
			while (h>0){
				ii front=pq.top(); pq.pop();
				d=front.first, guy=front.second;
				h-=hit[guy];
				pq.push(make_pair(d+delay[guy],guy));
			}
			while (!pq.empty()) pq.pop();
		}
		cout<<(guy ? "Beto" : "Andre")<<endl;
	}
	return 0;
}
