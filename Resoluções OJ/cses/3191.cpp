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

/*
Problem: Maximum Xor Subset
Link: https://cses.fi/problemset/task/3191
*/
 
int n, base[1<<5], xi, ans;

int main(){_
    cin >> n;
    while (n--){
        cin >> xi;
        for (int i=32; i--;){

            if (!((1<<i) & xi)) continue;

            if (!base[i]){
                base[i] = xi;
                break;
            }
            
            xi ^= base[i];
        }

    }
    ans = 0;
    for (int i=32; i--;){
        ans = max(ans, ans^base[i]);
    }
    cout << ans << endl;

    return 0;
}
