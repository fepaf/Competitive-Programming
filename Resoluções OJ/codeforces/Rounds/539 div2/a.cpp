#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define INF 0x3f3f3f3f
#define MAX (1<<7)
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define eb emplace_back
#define all(x) (x).begin(), (x).end()
#define lsb(x) (x & -x)

using namespace std;

int n,v,memo[MAX][MAX];

int f(int c, int t){

	if (c == n) return 0;

	if (~memo[c][t]) return memo[c][t];

	if (t){
		if (t<v){
			return memo[c][t] = min(f(c,t+1)+c,f(c+1,t-1));
		}
		else{
			return memo[c][t] = f(c+1,t-1);
		}
	}
	else {
		return memo[c][t] = f(c,t+1)+c;
	}

}

int main(){_

	while (cin >> n >> v){

		memset(memo,-1,sizeof(memo));

		cout << f(1,0) << endl;
	}


	return 0;
}
