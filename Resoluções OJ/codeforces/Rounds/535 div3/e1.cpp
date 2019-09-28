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
#define gcd(x,y) __gcd((x),(y))
#define rep(i,a,b) for (int (i)=(a); (i)<=(b); ++(i))
#define repi(i,a,b) for (int (i)=(a); (i)>=(b); --(i))

using namespace std;

int n, m, d, l[MAX], r[MAX], menor, maior, idx;
vi a, ans;

int main(){_
	while (cin >> n >> m){
		a = vi(n);

		rep(i,0,n-1){
			cin >> a[i];
		}
		d = -INF;

		rep(i,1,m){
			cin >> l[i] >> r[i];
			--l[i];
			--r[i];
		}
		
		rep(i,0,n-1){
			rep(j,1,m){
				if (i < l[j] || r[j] < i){
					rep(k,l[j],r[j]){
						--a[k];
					}
				}
			}
				
			int newd = (*max_element(all(a))) - (*min_element(all(a)));
			if (newd >= d){
				d = newd;
				idx = i;
			}
			
			rep(j,1,m){
				if (i < l[j] || r[j] < i){
					rep(k,l[j],r[j]){
						++a[k];
					}
				}
			}

		}

		rep(i,1,m){
			if (idx < l[i] || r[i] < idx){
				ans.eb(i);
			}
		}

		cout << d << endl << sz(ans) << endl;
		for (int c : ans){
			cout << c << ' ';
		}
		cout << endl << endl;

		a.clear();
		ans.clear();
	}
	return 0;
}
