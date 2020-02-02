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

using namespace std;

int q;
int n, m;
vi primes;
int ehcomp[MAX];

void crivo(int n){
	primes.eb(2);
	for (int i=3; i*i<=n; i+=2) {
		if (!ehcomp[i]){
			primes.eb(i);
			for (int j=i*i; j<=n; j+=i){
				ehcomp[j] = 1;
			}
		}
	}

	for (int p = primes[sz(primes)-1]+2; p<=n; p+=2){
		if (!ehcomp[p]){
			primes.eb(p);
		}
	}
}

int phi;

int main(){_
	crivo(1000);
	cin >> q;
	while (q--){
		cin >> n >> m;
		if (gcd(n,m)==1){
			phi = m;
			for (int p : primes){
				if (m==1) break;
				if (m%p==0){
					phi -= phi/p;
					while (m%p==0){
						m/=p;
					}
				}
			}
			if (m!=1){
				phi -= phi/m;
			}
			cout << phi << endl;
		}
		else{
			cout << -1 << endl;
		}
	}
	return 0;
}
