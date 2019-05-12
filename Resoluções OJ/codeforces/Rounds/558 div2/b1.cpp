#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX 100123
#define i64 long long
#define all(x) (x).begin() , (x).end()
#define ii pair<int, int>
#define sz(x) (int)((x).size())
#define fs first
#define sc second
#define eb emplace_back
#define vi vector<int>
#define vvi vector<vi>
#define vii vector<ii>
#define vvii vector<vii>
#define lsb(x) ((x) & (-x))

using namespace std;

int n, u[MAX], f[11][MAX], ans, x, cont;
map<int, int> freq;

int main(){_
	while (cin >> n){
		for (int i=1; i<=n; ++i){
			cin >> u[i];
			f[u[i]][i] = f[u[i]][i-1]+1;
		}
		x = 1;
		for (int i=1; i<=n; ++i){
			cont = 0;
			
			for (int j=1; j<=10; ++j){
				if (f[j][i]){
					++freq[f[j][i]];
					++cont;
				}
			}	
			
			if (sz(freq) == 2){
				auto it = freq.begin();
				int menor = (*it).fs;
				it++;
				int maior = (*it).fs;
//				cout << "dobrou em " << i << endl;
				cout << maior << " " << menor << endl;
				x = max((freq[menor]==cont-1 && freq[maior]==1 && (maior == menor-1))*i , x);
			}
			else if (sz(freq) == 1){
				cout << "solou em " << i << endl;
				x = max(((*freq.begin()).fs == 1)*i , x);
			}
			
			freq.clear();
		}
		cout << x << endl;
	}
	return 0;
}
