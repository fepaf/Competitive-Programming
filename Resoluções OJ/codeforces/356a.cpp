#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define MAX (1<<20)

using namespace std;

int conq[MAX], pai[MAX], maior[MAX];

int init(int n){
	for (int i=0; i<n; ++i){
		pai[i] = i;
		maior[i] = i;
	}
}

int id(int n){
	return (pai[n] == n ? pai[n] : (pai[n] = id(pai[n]) ) );
}

void join(int u, int v){
	u = id(u), v = id(v);	
	pai[v] = u;
	maior[u] = max(maior[u], maior[v]);
}

int l, r, x, gruop, n, m;

int main(){_
	cin >> n >> m;
	init(n+1);
	while (m--){
		cin >> l >> r >> x;
		for (int atual = l; atual <= r; atual = maior[atual]+1){
			atual = id(atual);
			if (x != atual){
				if (!conq[atual]) conq[atual] = x;
				join(x, atual);
			}
		}
	}
	for (int i=1; i<=n; ++i){
		cout << conq[i] << ' ';
	}
	cout << endl;
	return 0;
}
