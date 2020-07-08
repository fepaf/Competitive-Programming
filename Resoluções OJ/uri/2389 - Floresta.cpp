// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Floresta
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2389

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAX 100123
#define EPS (1e-7)
#define MOD 1000000007
#define UNVISITED -1
#define VISITED 1
#define ull unsigned long long
#define ll long long
#define ii pair<int, int>
#define vi vector<int>
#define vvi vector<vi>
#define vii vector<ii>
#define vd vector<double>
#define qi queue<int>
#define fs first
#define sc second
#define pb push_back

using namespace std;

long long n,x,y,mid,lo,hi,r,ans;

/*
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ios_base::sync_with_stdio(0);
	
	ll n;
	cin >> n;

	int ans = 0;
	for (ll x = 2; x * x <= n; x++)
	{
		int l = x;
		int r = n;
		while (l < r)
		{
			int y = (l + r) / 2;
			ll k = x * y + (x - 1) * (y - 1);

			if (k < n) l = y + 1;
			else if (k > n) r = y;
			else l = r, ans++;
		}
	}

	cout << ans << endl;

	return 0;
}
*/

int main(){_
	while (cin>>n){
		r=sqrt(n); ans=0;
		for (x=1; x<=r; x++){
			lo=x, hi=n;
			while (lo<hi){
				mid=lo+(hi-lo)/2;
				if (2*x*mid-(x+mid)+1>n) hi=mid;
				else if (2*x*mid-(x+mid)+1<n) lo=mid+1;
				else lo=hi, ans++;
			}
//			ans+=(n==2*x*lo-(x+lo)+1);
		}
		cout<<ans<<endl;
	}
    return 0;
}

