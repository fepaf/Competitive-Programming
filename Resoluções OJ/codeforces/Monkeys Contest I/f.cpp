#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#ifdef ONLINE_JUDGE
#define endl '\n'
#endif
#define INF 0x3f3f3f3f
#define MAX (1<<20)
#define OUT MAX
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
#define esq(x) (x<<1)
#define dir(x) ((x<<1)|1)
#define W(x) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;

using namespace std;

int c, l , k, oi, oj, di, dj, ans;

int main(){_
    cin >> c >> l >> k >> oi >> oj >> di >> dj;

    if (((oi+oj)&1) != ((di+dj)&1)){
        cout << -1 << endl;
        return 0;
    }
    ans = INF;
    for (int i=oi, j=oj, mv=0; i<=c && j<=l && mv<k; ++i, ++j, ++mv){
        if (i+j == di+dj && abs(di-i)<=k-mv){
            ans = min(ans,mv + abs(di-i));
        }
    }

    for (int i=oi, j=oj, mv=0; i>=1 && j>=1 && mv<k; --i, --j, ++mv){
        if (i+j == di+dj && abs(di-i)<=k-mv){
            ans = min(ans,mv + abs(di-i));
        }
    }

    for (int i=oi, j=oj, mv=0; i<=c && j>=1 && mv<k; ++i, --j, ++mv){
        if (i-j == di-dj && abs(di-i)<=k-mv){
            ans = min(ans,mv + abs(di-i));
        }
    }

    for (int i=oi, j=oj, mv=0; i>=1 && j<=l && mv<k; --i, ++j, ++mv){
        if (i-j == di-dj && abs(di-i)<=k-mv){
            ans = min(ans,mv + abs(di-i));
        }
    }

    cout << (ans!=INF ? ans : -1) << endl;
    return 0;
}
