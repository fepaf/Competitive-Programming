#include<bits/stdc++.h>
#define MAXN (1<<20)
#define _ ios_base::sync_with_stdio(0);

/*
Problem: Missing Coin Sum
Link: https://cses.fi/problemset/task/2183
*/

using namespace std;

int t,n,a[MAXN];
long long ans;

int main(){_
    cin>>n;
    for (int i=n;i--;){
        cin>>a[i];
    }
    sort(a,a+n);
    ans=0;
    for (int i=0; i<n; i++){
        if (a[i]>ans+1) break;
        ans+=a[i];
    }
    cout<<++ans<<endl;
    return 0;
}
