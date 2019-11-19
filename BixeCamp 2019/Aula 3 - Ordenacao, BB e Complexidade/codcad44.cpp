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

struct pais{
	int o, p, b, id;
};

int n, o, p, b, m;
pais paises[MAX];

int cmp(pais a, pais b){
	if (a.o != b.o) return a.o > b.o;
	if (a.p != b.p) return a.p > b.p;
	if (a.b != b.b) return a.b > b.b;
	return a.id < b.id;
}

int main(){_
	cin >> n >> m;

	for (int i=1; i<=n; ++i){
		paises[i].id = i;
	}
	
	while (m--){
		cin >> o >> p >> b;
		paises[o].o++;
		paises[p].p++;
		paises[b].b++;
	}

	sort(paises+1, paises+1+n, cmp);

	for (int i=1; i<=n; ++i){
		cout << paises[i].id << ' ';
	}
	cout << endl;
	return 0;
}
