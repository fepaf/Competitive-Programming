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

/*
uva 12032 The Monkey and the Oiled Bamboo
*/
i64 x, a[MAX], lo, hi, md, caso, n;

i64 p(i64 k, i64 x){
    for (int i=1; i<n; ++i){
        if (k < a[i]-a[i-1]){
            return 0;
        }
        if (k == a[i]-a[i-1]){
            --k;
        }
        //k-= (k == a[i]-a[i-1]);
    }
    return 1;
}

int main(){_
    cin >> caso;
    while( caso--){
        cin >> n;
        for (int i=0; i<n; ++i){
            cin >> a[i];
        }
        lo = 0; hi = 10000002;
        while (lo < hi){
            md = lo + (hi-lo)/2;

            if (p(md, x)) hi = md;
            else lo = md+1;
        }
        cout << lo << endl;
    }
    return 0;
}
