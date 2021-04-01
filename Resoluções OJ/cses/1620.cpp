#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<20)
#define MOD 1000000007
#define i64 unsigned long long
#define all(x) (x).begin() , (x).end()
#define sz(x) (int)(x).size()
#define ii antr<int, int>
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
Problem: Factory Machine
Link: https://cses.fi/problemset/task/1620
*/

i64 n, t, k[MAX], hi, lo, md, sum;

int main(){_
    cin >> n >> t;
    for (int i=0; i<n; ++i){
        cin >> k[i];
    }
    lo = 0, hi = -1LL;
    while (lo < hi){
        md = lo + ((hi-lo)>>1);
        sum = 0;
        W(md)
        for (int i=0; i<n; ++i){
            sum += (md/k[i]);
        }
        if (sum >= t) hi = md;
        else lo = md+1;
    }
    cout << lo << endl;
}
