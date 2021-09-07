#include<bits/stdc++.h>

using namespace std;

unsigned long long int n,x;

int main(){
  while (cin>>n){
	n=(sqrt(8.0*n+1.0)-1.0)/2.0;
	cout<<n<<endl;
  }
	return 0;
}
