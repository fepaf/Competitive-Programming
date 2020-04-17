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

int n, e, v, d, dir[2][MAX];
string hor, ant;
vi ans[3], p;

vi p_function(string t){
    int n = sz(t);
    vi p = vi(n);
    p[0] = 0;
    for (int i=1; i<n; i++){
        p[i] = p[i-1];
        while (t[i] != t[p[i]] && p[i]) p[i] = p[p[i]-1];
        p[i] += (t[i] == t[p[i]]);
    }
    return p;
}

int main(){_

	cin >> n >> e;
	while (e--){
		cin >> v >> d;
		dir[~d ? 0 : 1][v-1] = 1;
	}

	for (int i=0; i<n; ++i){
		hor += (dir[0][i] ? '1' : '0');
		ant += (dir[1][i] ? '1' : '0');
	}

	p = p_function(hor+"#"+ant+ant);

	for (int i=2*n+1; i<=3*n; ++i){
		if (p[i] == n){
			ans[0].eb(i-2*n);
		}
	}
	
	p = p_function(hor+"#"+hor+hor);

	for (int i=2*n+1; i<=3*n; ++i){
		if (p[i] == n){
			ans[1].eb(i-2*n);
		}
	}
	
	p = p_function(ant+"#"+ant+ant);

	for (int i=2*n+1; i<=3*n; ++i){
		if (p[i] == n){
			ans[2].eb(i-2*n);
		}
	}

	if (sz(ans[2])==n && ant[0]=='0'){
		cout << ans[1][0] << endl;
		return 0;
	}

	if (sz(ans[1])==n && hor[0]=='0'){
		cout << ans[2][0] << endl;
		return 0;
	}

	if (sz(ans[0])){
		cout << ans[0][0] << endl;
		return 0;
	}

	cout << n << endl;
    return 0;
}
