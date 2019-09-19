#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<20)
#define i64 long long
#define all(x) (x).begin() , (x).end()
#define sz(x) (int)(x).size()
#define ii pair<int, int>
#define fs first
#define sc second
#define eb emplace_back
#define vi vector<int>
#define vvi vector<vi>
#define vii vector<ii>
#define vvii vector<vii>
#define lsb(x) ((x) & (-x))
#define int i64

using namespace std;

int n, c, tempo, limite, p[MAX], t, lo, hi;

signed main(){_
	while (cin >> n >> c >> t){

		for (int i=0; i<n; ++i){
			cin >> p[i];
		}

		lo = 0, hi = 10000000000LL;
		while (lo < hi){
			tempo = lo +(hi - lo)/2;
			
			int jog = 1, acum = 0;
			for (int i=0; i<n; ++i){
				if (p[i] > tempo*t){
					jog = INF;
					break;
				}
				if (acum+p[i] <= tempo*t){
					acum += p[i];
				}
				else {
					acum = 0;
					++jog;
					--i;
				}
			}

			if (jog <= c){
				hi = tempo;
			}
			else {
				lo = tempo + 1;
			}
		}

		cout << lo << endl;
	}
	return 0;
}
