#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#ifdef ONLINE_JUDGE
#define endl '\n'
#endif
#define INF (2e18)
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
#define branco 0
#define cinza -1
#define preto 1

using namespace std;

/*
Problem: Ferris Wheel
Link: https://cses.fi/problemset/task/1090
*/
 
int n, x, p[MAX], ans;

int main(){_
    cin >> n >> x;
    for (int i=0;i<n; ++i){
        cin >> p[i];
    }
    sort(p, p+n);
    for (int i=0,j=n-1; i<=j;++ans){
        if (p[i]+p[j]<=x){
            ++i, --j;
        } else {
            --j;
        }
    }
    cout << ans << endl ;
    return 0;     
}
