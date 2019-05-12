#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX 1123
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

int n,m, memo[MAX][MAX];

int main(){_
	while (cin >> n >> m){
		cout << (m ? (m <= (n/2) ? m : (n-m)) : 1) << endl;
	}
	return 0;
}
