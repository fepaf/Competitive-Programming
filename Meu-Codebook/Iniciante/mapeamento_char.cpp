#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAX 10001234
#define vi vector<ll>
#define vvi vector<vi>
#define eb emplace_back
#define ll long long

using namespace std;

string s;
int m,r,v[256],ans,x,n;
char c;

int main(){_

	for (int c='a'; c<='z'; c++){
		v[c] = c-'a';
	}
	for (int c='A'; c<='Z'; c++){
		v[c] = c-'A'+26;
	}
	for (int c='0'; c<='9'; c++){
		v[c] = c-'0'+52;
	}


	while (cin>>s>>n){
		for (int c='a'; c<='e'; c++){
			cin>>x;
			v[c] = x;
		}
		ans=0;
		for (char c : s){
			ans += v[c];
		}
		for (int i=256; i--;) v[i] = 0;
		cout<<ans<<endl;
	}
	return 0;
}
