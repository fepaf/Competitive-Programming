#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAX 1002
#define EPS (1e-7)
#define MOD 1000000007
#define UNVISITED -1
#define VISITED 1
#define ull unsigned long long
#define ll long long
#define ii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vvi vector<vi>
#define vii vector<ii>
#define vd vector<double>
#define qi queue<int>
#define fs first
#define sc second
#define pb push_back

using namespace std;

ll fat[21];
string s;
ll t,freq[26];
ll ans;

int main(){_
    fat[0] = 1;
    for (int i=1; i<=20; ++i){
        fat[i] = fat[i-1]*i;
    }
    while (cin>>s){
        t=s.size();
        for (int i=t;i--;){
            ++freq[s[i]-'a'];
        }
        ans=fat[t];
        for (int i=26;i--;){
            if (freq[i]){
                ans=(ans/fat[freq[i]]);
                freq[i]=0;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
