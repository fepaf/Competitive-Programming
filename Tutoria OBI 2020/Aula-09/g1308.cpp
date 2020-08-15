#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
 
using namespace std;
 
unsigned long long x,n,t;
 
int main(){_
    cin>>t;
    while (t--){
        cin>>n;
        x=(sqrt(1.0+8.0*n)-1.0)/2.0;
        cout<<x<<endl;
    }
    return 0;
}