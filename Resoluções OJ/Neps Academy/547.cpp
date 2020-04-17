#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (3000123)
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

int n, e, v, d;
int ant[MAX], hor[MAX], p1[MAX];

int main(){_
	cin >> n >> e;
	for (int i=0; i<e; ++i){
		cin >> v >> e;
		if (~d){
			hor[v-1] = hor[v+n] = hor[v+n+n] = 1;
		}
		else {
			ant[v-1] = ant[v+n] = ant[v+n+n] = 1
		}
	}
	hor[n] = ant[n] = INF;
	p1[0] = 0;
	for (int i=1; i<n; ++i){
		p1[i] = p1[i-1];
		while (hor[i] != hor[p1[i]] && p1[i]) p1[i] = p1[p1[i]-1];
		p1[i] = (hor[i] == hor[p1[i]]);
	}
    return 0;
}
