#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<20)
#define MOD 1000000007
#define i64 long long
#define all(x) (x).begin() , (x).end()
#define sz(x) (int)(x).size()
#define ii pair<int, int>
#define fs first
#define sc second
#define eb emplace_back
#define vi vector<int>
#define vvi vector<vi>
#define vii vector<ii>
#define vvii vector<vii>
#define lsb(x) ((x) & (-x))
#define gcd(x,y) __gcd((x),(y))
#define W(x) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;

using namespace std;

int t, n, k;
string s;

int f(int l, int r, char c){
    if (l==r) return (s[l]!=c);
    int m = l+(r-l)/2;
    int e =0 , d=0;
    for (int i=l; i<=m; ++i){
        e += (s[i]!=c);
    }
    for (int i=m+1; i<=r; ++i){
        d += (s[i]!=c);
    }
    return min(e+f(m+1,r,c+1), f(l,m,c+1)+d);
}

int main(){_
    for (cin >> t; t--;){
        cin >> n >> s;
        cout << f(0,n-1,'a') << endl;
    }
    return 0;
}
