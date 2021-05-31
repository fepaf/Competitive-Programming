#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAX 102
#define EPS (1e-7)
#define MOD 1000000007
#define UNVISITED -1
#define VISITED 1
#define ull unsigned long long
#define ll long long
#define ii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vl vector<ll>
#define vvi vector<vi>
#define vii vector<ii>
#define vd vector<double>
#define qi queue<int>
#define fs first
#define sc second
#define pb push_back

using namespace std;

pll ee(ll a, ll b){
    if (!b) return pll(1,0);
    pll p = ee(b,a%b);
    return pll(p.sc, p.fs-(a/b)*p.sc);
}

ll l, r;

int main(){_
    while (cin>>l>>r){
        pll p = ee(l, r);
        if ((l==r && l!=1) || __gcd(l,r)!=1 ) cout<<"IMPOSSIVEL"<<endl;
        else cout<<abs(p.fs)+abs(p.sc)<<endl;
    }
    return 0;
}
