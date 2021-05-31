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
#define vi vector<i64>
#define vvi vector<vi>
#define vii vector<ii>
#define vvii vector<vii>
#define lsb(x) ((x) & (-x))
#define gcd(x,y) __gcd((x),(y))
#define esq(x) (x<<1)
#define dir(x) ((x<<1)|1)
#define W(x) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;

using namespace std;

i64 t, m, r, mi;
vi ans;
string n;

int main(){_
    cin >> n >> m;
    while (m--){
        cin >> mi;
        r = 0;
        for (char d : n){
            r = ((r<<1)+d-'0')%mi; 
        }
        if (!r){
            ans.eb(mi);
        }
    }
    sort(all(ans));
    if (!sz(ans)) {
        cout << "Nenhum" << endl;
        return 0;
    }
    cout << ans[0];
    for (int i=1; i<sz(ans); ++i){
        cout << ' ' << ans[i];
    }
    cout << endl;
    return 0;
}
