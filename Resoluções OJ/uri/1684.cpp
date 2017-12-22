#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int f[10123],n,m,a,b,ans,t;

int main(){_
    for (cin>>t;t--;){
        cin>>n>>m;
        while (m--){
            cin>>a>>b;
            ++f[a] , ++f[b];
        }
        ans = 1;
        for (int i=0; i<n; i++){
            ans &= (!(f[i]&1));
            f[i] = 0;
        }
        cout<<(ans ? "Yes" : "No")<<endl;
    }
    return 0;
}
