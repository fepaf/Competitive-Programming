// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Quadrados
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2327

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define i64 long long
#define MAX 1<<10

using namespace std;

i64 sl[MAX], sc[MAX], sdp, sds, a, n;
set<i64> valores;

int main(){_
	while (cin >> n){
		sdp = sds = 0;
		for (int i=n; i--;){
			sl[i] = sc[i] = 0;
		}
		
		for (int i=n; i--;){
			for (int j=n; j--;){
				cin >> a;
				sl[i] += a;
				sc[j] += a;
				sdp += (i==j)*a;
				sds += (i+j == n-1)*a;
			}
		}
		
		valores.insert(sdp); valores.insert(sds);
		for (int i=n; i--;){
			valores.insert(sl[i]);
			valores.insert(sc[i]);
		}
		
		cout << ((valores.size()==1) ? (*valores.begin()) : -1) << endl;
		
		valores.clear();
	}
	return 0;
}
