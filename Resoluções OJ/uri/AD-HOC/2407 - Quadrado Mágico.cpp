// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Quadrado Mágico
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2407

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define i64 long long
#define MAX 1<<10

using namespace std;

i64 sl[MAX], sc[MAX], sdp, sds, a, n, inrange, showed;
set<i64> valores;
unordered_map<int,int> f;

int main(){_
	while (cin >> n){
		sdp = sds = 0;
		for (int i=n; i--;){
			sl[i] = sc[i] = 0;
		}
		
		inrange=1;
		
		for (int i=n; i--;){
			for (int j=n; j--;){
				cin >> a;
				sl[i] += a;
				sc[j] += a;
				sdp += (i==j)*a;
				inrange &= (1<=a && a<=n*n);
				++f[a];
			}
		}
		
		showed = 1;
		for (auto xf : f){
			showed &= (xf.second==1);
		}
		
		valores.insert(sdp);
		for (int i=n; i--;){
			valores.insert(sl[i]);
			valores.insert(sc[i]);
		}
		
		cout << ( (valores.size()==1 && showed && inrange) * (*valores.begin()) ) << endl;
		
		valores.clear(); f.clear();
	}
	return 0;
}
