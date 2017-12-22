#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);
#define s(n) (n<0?-1:1)

using namespace std;

char d[]="0+-";

void setun(int x){
	if ((x+s(x))/3) setun((x+s(x))/3);
	cout<<d[((x%3)+3)%3];
}

int main(){
	int n;
	while (cin>>n) setun(n), cout<<endl;
	return 0;
}
