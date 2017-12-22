#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define INF 0x3f3f3f3f
#define eb emplace_back
#define ll long long
#define vl vector<ll>
#define vvl vector<vl>
#define vi vector<int>
#define vvi vector<vi>
#define TAM (n+1)
#define MOD 303700049

using namespace std;

string n,m;
int ans;

int main(){_
    while (cin>>n){
        for (ans=0; atoi(n.c_str()); ++ans){
            m = n;
            sort(m.begin(),m.end());
            n = to_string(atoi(n.c_str())-atoi(m.c_str()));
        }
        cout<<ans<<endl;
    }
    return 0;
}
