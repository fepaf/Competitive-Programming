#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX 100123
#define i64 long long
#define all(x) (x).begin(),(x).end()
#define eb emplace_back
#define vi vector<int>
#define vvi vector<vi>
#define sz(x) ((int)(x).size())
#define fs first
#define sc second

using namespace std;

string s;
int n, ps[2*MAX], na, nb;

void answering(int na, int nb){
	if ((na&2) || (nb&2)){
		cout << "NO" << endl;
		return;
	}
	int diff = ((na >> 2) - (nb >> 2)), half = (n >> 1);
	for (int l=0; l<n; ++l){
		if ((ps[l+half] - ps[l]) == diff){
			cout << "YES\n" << (l+1) << ' ' << (l+half+1) << endl;
			return;
		}
	}
	cout << "NO" << endl;
	return;
}
int teste = 0;
int main(){_
	
	while (cin >> s){
		n = sz(s);
		s += s;
		na = nb = 0;
		ps[0] = 0;
		for (int i=1; i<=2*n; ++i){
			ps[i] = ps[i-1] + (s[i-1] == 'A' ? 1 : -1);
			na += (s[i-1] == 'A');
			nb += (s[i-1] == 'B');
		}
		answering(na, nb);
	}

	return 0;
}
