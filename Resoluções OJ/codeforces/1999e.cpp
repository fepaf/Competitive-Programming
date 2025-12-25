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

int t, n, l, r, l3[MAX], psa[MAX];

int main(){_
    for (int i=1; i<MAX; ++i){
        int x;
        for (l3[i] = 0, x=i; x; x/=3){
            ++l3[i];
        }
        psa[i] = psa[i-1] + l3[i];
    }
    for (cin >> t; t--;){
        cin >> l >> r;
        cout << psa[r]-psa[l-1]+l3[l] << endl;
    }
    return 0;
}
