#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAX 10001234
#define vi vector<ll>
#define vvi vector<vi>
#define eb emplace_back
#define ll long long

using namespace std;

string n;
int m,r;

int main(){_
	while (cin>>n>>m){
		r=0;
		for (char d : n){
			r = (((10%m)*r)%m+(d-'0')%m)%m;
		}
		cout<<"resto: "<<r<<endl;
	}
	return 0;
}
