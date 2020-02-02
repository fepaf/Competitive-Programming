#include<bits/stdc++.h>
#define MAXN 21234
using namespace std;

long long n,a[MAXN], ans[MAXN];

int main(){
    cin >> n;
    for(int i=0;i<n*2;i++){
        cin >> a[i];
    }
    sort(a,a+n*2);
    for (int i=0; i<n; ++i){
        ans[i] = (a[i]+a[2*n-i-1]);
    }
    sort(ans, ans+n);
    cout << abs(ans[n-1]-ans[0]) << endl;
    return 0;  
}