#include<bits/stdc++.h>

using namespace std;

/*
Problem: Counting Bits
Link: https://cses.fi/problemset/task/1146
*/


typedef long long int ll;

ll count1(ll n){
	ll i,t,res=0;
	t=(log(n)/log(2)+1);
	n++;
	for (i=1;i<=t;i++) res+=(n/(1LL<<i))*(1LL<<(i-1)) + ((n%(1LL<<i))%(1LL<<(i-1)))*((n%(1LL<<i))/(1LL<<(i-1)));
	return res;
}

ll n;

int main(){
	ios_base::sync_with_stdio(false);
	while (cin>>n) cout<<count1(n)<<endl;
	return 0;
}