#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAX 10001234
#define vi vector<ll>
#define vvi vector<vi>
#define eb emplace_back
#define ll long long

using namespace std;

int t,n,m,p,s,ans;

int main(){_
	for (cin>>t; t--;){
		cin>>n>>m;
		for (s=0,ans=1;n--;s+=p){
			cin>>p;
			ans+=(s+p>m);
			s*=(s+p<=m);
		}
		cout<<ans<<endl;
	}
	return 0;
}
