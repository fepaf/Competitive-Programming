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

//#define left(x) ((x)<<1)
//#define right(x) (((x)<<1)+1)

using namespace std;

int n, d;
int a[MAX], l[MAX], r[MAX], idx, m, idx_ans, s[MAX];

int main(){_
	vi ans;
	while (scanf("%i %i",&n, &m)!=EOF){
		rep(i,1,n){
			scanf("%i",&a[i]);
		}

		vi ext;
		rep(i,1,m){
			scanf("%i %i",&l[i], &r[i]);
			ext.eb(l[i]);
		}

		d = (*max_element(a+1, a+n+1)) - (*min_element(a+1, a+n+1));
		idx_ans = 0;
		for (int idx : ext){
			
			rep(i,0,n){
				s[i] = 0;
			}

			rep(i,1,m){
				if (l[i] <= idx && idx <= r[i]){
					--s[l[i]], ++s[r[i]+1];
				}
			}

			int menor = INF, maior = -INF;
			rep(i,1,n){
				s[i] += s[i-1];
				menor = min(menor, a[i] + s[i]);
				maior = max(maior, a[i] + s[i]);
			}

			int newd = maior - menor;
			if (newd >= d){
				d = newd;
				idx_ans = idx;
			}
			
		}


		rep(i,1,m){
			if (l[i] <= idx_ans && idx_ans <= r[i]){
				ans.eb(i);
			}
		}

		printf("%i\n%i\n", d, sz(ans));
		for (int c : ans){
			printf("%i ",c);
		}
		printf("\n");
		
		ans.clear();
		ext.clear();
	}
	return 0;
}
