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

int n, m;
int p[MAX], aux[MAX];
int x, l , r;
int menor, maior;

int main(){_
	scanf("%i %i", &n, &m);
	for (int i=0; i<n; ++i){
		scanf("%i", &p[i]);
		aux[i] = p[i];
	}
	while (m--){
		scanf("%i %i %i", &l, &r, &x);
		--l, --x;
		menor = maior = 0;
		for (int i=l; i<r; ++i){
			maior += (i<x && p[i]>p[x]);
			menor += (i>x && p[i]<p[x]);
		}
		printf("%s\n", ((maior == menor) ? "Yes" : "No"));
	}
	return 0;
}
