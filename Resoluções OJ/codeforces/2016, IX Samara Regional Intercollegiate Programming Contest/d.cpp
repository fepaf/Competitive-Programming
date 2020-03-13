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

struct tripla{
	int x, p, ind, l, r;
};

int cmp(tripla a, tripla b){
	return a.x < b.x;
}

int n;
tripla a[MAX];
int ans[MAX];
stack<int> pilha;

int main(){_
	cin >> n;
	for (int i=1; i<=n; ++i){
		cin >> a[i].x >> a[i].p;
		a[i].ind = i;
	}
	sort(a+1, a+n+1, cmp);
	a[n+1] = {INF, INF, -1, 0, 0};
	for (int i=1; i<=n+1; ++i){
		while (!pilha.empty() && a[i].p > a[pilha.top()].p){
			a[pilha.top()].l = i;
			pilha.pop();
		}
		pilha.push(i);
	}
	a[0] = {INF, INF, -1, 0, 0};
	for (int i=n; i>=0; --i){
		while (!pilha.empty() && a[i].p > a[pilha.top()].p){
			a[pilha.top()].r = i;
			pilha.pop();
		}
		pilha.push(i);
	}
	for (int i=1; i<=n; i++){
		int l = a[i].l;
		int r = a[i].r;
		if (abs(a[l].x - a[i].x) < abs(a[r].x - a[i].x)){
			ans[a[i].ind] = a[l].ind;
		}
		else if (abs(a[l].x - a[i].x) > abs(a[r].x - a[i].x)){
			ans[a[i].ind] = a[r].ind;
		}
		else {
			ans[a[i].ind] = a[l].p > a[r].p ? a[l].ind : a[r].ind;
		}
	}
	for (int i=1; i<=n; i++){
		cout << ans[i] << ' ';
	}
	cout << endl;
    return 0;
}
