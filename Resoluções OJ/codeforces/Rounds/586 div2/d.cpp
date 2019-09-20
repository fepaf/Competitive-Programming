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
#define vi vector<i64>
#define vvi vector<vi>
#define vii vector<ii>
#define vvii vector<vii>
#define lsb(x) ((x) & (-x))
#define gcd(x,y) __gcd((x),(y))

using namespace std;

i64 n, b[MAX], maior;
map<i64, i64> bucket;

int main(){_
	while (cin >> n){
		maior = 0;
		for (int i=0; i<n; ++i){
			cin >> b[i];
			if ((++bucket[lsb(b[i])]) > bucket[maior]){
				maior = lsb(b[i]);
			}
		}
		cout << (n-bucket[maior]) << endl;
		for (int i=0; i<n; ++i){
			if (lsb(b[i]) != maior){
				cout << b[i] << ' ';
			}
		}
		cout << endl;
		bucket.clear();
	}
	return 0;
}
