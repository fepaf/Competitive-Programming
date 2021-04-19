#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF (2e18)
#define MAX (1<<20)
#define MOD 1000000007
#define i64 long long
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
Problem: Digit Queries
Link: https://cses.fi/problemset/task/2431
*/

i64 q, k, p10[20], lo, hi, md, t;

int cnt_dig(i64 n){
   int ans = 0;
   if (!n) return 0;
   for (; n; n/=10){
       ++ans;
   }
   return ans;
}

i64 block(i64 n){
    i64 ans = 0LL;
    for (int i=0; i<=18 && n>=p10[i]-1; ++i){
        ans += (n-p10[i]+1);
    }
    return ans;
}

int main(){_
    p10[0] = 1;
    for (int i=1; i<=18; ++i){
        p10[i] = p10[i-1]*10;
    }

    for (cin>>q; q--;){
        cin >> k;
        i64 save=k;

        lo = 0, hi = 1e18, md;
        while (lo < hi){
            md = lo + ((hi-lo)>>1);
            if (block(md)>=k) hi = md;
            else lo = md+1;

        }

        k -= block(lo-1);
        t = cnt_dig(lo);

        for (int i=t-k; i>0; --i){
            lo /= 10;
        } 
        cout << (lo%10) << endl;
    }
    return 0;     
}
