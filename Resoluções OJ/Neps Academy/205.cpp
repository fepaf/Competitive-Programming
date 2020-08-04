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
#define vl vector<i64>
#define vvi vector<vi>
#define vii vector<ii>
#define vvii vector<vii>
#define lsb(x) ((x) & (-x))
#define gcd(x,y) __gcd((x),(y))
#define W(x) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;

using namespace std;

i64 n, f, lo, hi, md, s;
vl c;

int main(){_
    cin >> n >> f;
    c = vl(n);
    for (i64 &ci : c){
        cin >> ci;
    }
    lo=0, hi=(1LL<<50);
    while (lo < hi){
        md = lo +(hi-lo)/2;
        s = 0;
        for (i64 ci : c){
            s += (md/ci);
        }
        (s>=f) ? hi=md : lo=md+1;
    }
    cout << lo << endl;
    return 0;
}