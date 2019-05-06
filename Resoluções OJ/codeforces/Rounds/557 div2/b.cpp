#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX 1024
#define i64 long long
#define all(x) (x).begin() , (x).end()
#define eb emplace_back
#define vi vector<int>

using namespace std;

int a[2][MAX][MAX], b[MAX][MAX],n,m, memo[MAX],maior;


int main(){_
	while (cin >> n >> m){
		for (int i=0; i<n; ++i){
			for (int j=0; j<m; ++j){
				cin >> a[0][i][j];
			}
		}
		
		for (int i=0; i<n; ++i){
			for (int j=0; j<m; ++j){
				cin >> a[1][i][j];
			}
		}

		int ans = 1;
		
		for (int i=0; i<n; ++i){
			for (int j=1; j<m; ++j){
				if (a[0][i][j-1] >= a[0][i][j]){
					swap(a[0][i][j], a[1][i][j]);
				}

				if (a[1][i][j-1] >= a[1][i][j]){
					swap(a[0][i][j], a[1][i][j]);
				}
				
				ans &= ((a[0][i][j-1] < a[0][i][j]) && (a[1][i][j-1] < a[1][i][j]));
			}
		}
		
		for (int j=0; j<m; ++j){
			for (int i=1; i<n; ++i){
				if (a[0][i-1][j] >= a[0][i][j]){
					swap(a[0][i][j], a[1][i][j]);
				}

				if (a[1][i-1][j] >= a[1][i][j]){
					swap(a[0][i][j], a[1][i][j]);
				}
				
				ans &= ((a[0][i-1][j] < a[0][i][j]) && (a[1][i-1][j] < a[1][i][j]));
			}
		}
		
		cout << (ans ? "Possible" : "Impossible") << endl;
	}

	return 0;
}
