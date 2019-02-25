#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);
#define vi vector<int>
#define ii pair<int>
#define vii vector<ii>
#define i64 long long
#define MAX (25)
#define MOD 1000000007
#define eb emplace_back
#define all(x) (x).begin() , (x).end()

int n;
char s[MAX];
int f[256];
int maxOdd;
int fat[11];
int ans;
int t;
int main(){_

	fat[0]=1;
	for(int i=1; i<=10; i++){
		fat[i] = fat[i-1]*i;
	}

	for (scanf("%i",&t); t--;){
		scanf("%i",&n);
		scanf("%s", s);

		for(int i='a'; i<='z'; i++){
			f[i] = 0;
		}

		for(int i=0; i<n; i++){
			++f[s[i]];
		}

		maxOdd = 0;

		for(int i='a'; i<='z'; i++){
			maxOdd += ((f[i]&1) != 0);
		}

		ans = fat[n/2];

		for(int i='a'; i<='z'; i++){
			ans /= fat[f[i]/2];
		}

		printf("%d\n", (maxOdd<2? ans:0));

	}


	return 0;
}
