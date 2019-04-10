#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define MAX (1<<20)
#define i64 long long

using namespace std;

i64 n, ans, a[MAX], maior;
unordered_map<i64,int> freq;

int main(){_
	cin >> n;
	for (int i=1; i<=n; ++i){
		cin >> a[i];
		++freq[a[i]];
	}
	maior = a[1];
	for (auto xf : freq){
		i64 x = xf.first, f = xf.second;
		if (f > freq[maior]) maior = x;
	}
	cout << (n-freq[maior]) << endl;
	
	for (int i=2; i<=n; ++i){
		if (a[i] != maior && a[i-1]==maior){
			cout << (a[i] < a[i-1] ? 1 : 2) << ' ' << i << ' ' << (i-1) << endl;
			a[i] = maior;
		}
	}
	
	for (int i=n-1; i>=1; --i){
		if (a[i] != maior && a[i+1]==maior){
			cout << (a[i] < a[i+1] ? 1 : 2) << ' ' << i << ' ' << (i+1) << endl;
			a[i] = maior;
		}
	}
	
	
	return 0;
}
