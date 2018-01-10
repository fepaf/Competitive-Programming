#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define INF 0x3f3f3f3f
#define MAX (1<<7)
#define i64 long long

using namespace std;

int n, t, pi;
long double p, ans, d;

int main(){_
    for (cin>>t; t--;){
        cin>>d>>n;
        for (ans = 0; n--;){
            cin>>p;
            if (d>p) ans = max(ans, d-((int)((long double)d/p))*p);
        }
        cout<<fixed<<setprecision(2)<<ans<<endl;
    }
    return 0;
}
