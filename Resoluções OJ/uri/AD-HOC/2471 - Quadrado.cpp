// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Quadrado
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2471

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define int long long

using namespace std;


map<int,int> f;
int sl[50],sc[50],n,a[50][50],idx_i,idx_j;

signed main(){_
	while (cin >> n){
		for (int i=0;  i<n; ++i){
			sl[i] = sc[i] = 0;
		}
	
		for (int i=0;  i<n; ++i){
			for (int j=0;  j<n; ++j){
				cin >> a[i][j];
				sl[i] += a[i][j];
				sc[j] += a[i][j];
			}
		}
		
		for (int i=0;  i<n; ++i){
			f[sl[i]]++;
			f[sc[i]]++;
		}
		
		for (int i=0;  i<n; ++i){
			if (f[sl[i]]==2){
				idx_i = i;
			}
			if (f[sc[i]]==2){
				idx_j = i;
			}
		}
		
		cout << a[idx_i][idx_j]+sl[(idx_i+1)%n]-sl[idx_i] << " " << a[idx_i][idx_j] << endl;
		
		f.clear();
	}
	return 0;
}
