#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define maxn 1000123

using namespace std;

int n,m,b[maxn];
string p;

void pre(string p){
    int i=0,j=-1,m=p.size();
    for (int k=m+1;k--;) b[k]=0;
    b[0]=-1;
    while (i<m){
        while (j>=0 && p[i]!=p[j]) j=b[j];
        i++ , j++;
        b[i]=j;
    }
}

int main(){_
	int t,i;
	while ((cin>>p)&&(p!="*")){
		pre(p);
		t=p.size();
		cout<<( t%(t-b[t])==0 ? t/(t-b[t]): 1)<<endl;
	}
	return 0;
}
