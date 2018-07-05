// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Surf Aquático
// Nível: 3
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2560

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define int long long
#define ii pair<int,int>
#define vi vector<int>
#define fs first
#define sc second

using namespace std;

deque<ii> wmin,wmax;
int n,b,ans;
vi a,sum;

signed main(){
	while (cin>>n>>b){
		a = vi(n+1,0); sum = vi(n+1,0); ans = 0;
		for (int i=1; i<=n; i++){
			cin>>a[i];
			sum[i] = sum[i-1]+a[i];
			
			while (!wmin.empty() && wmin.back().fs > a[i]) wmin.pop_back();

			wmin.push_back(ii(a[i],i));
			
			while (wmin.front().sc <= i-b) wmin.pop_front();

			while (!wmax.empty() && wmax.back().fs < a[i]) wmax.pop_back();

			wmax.push_back(ii(a[i],i));
						
			while (wmax.front().sc <= i-b) wmax.pop_front();
			
			if (i>=b){
				ans += (sum[i]-sum[i-b]-wmax.front().fs-wmin.front().fs);
			}
		}
		cout<<ans<<endl;
		wmin.clear() , wmax.clear();
	}
	return 0;
}
