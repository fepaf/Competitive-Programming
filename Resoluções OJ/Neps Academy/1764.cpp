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

i64 n, m, x[MAX], s, md, lim;
map<i64, int> show;

int main(){_
    cin >> n >> m;
    for (int i=0; i<n; ++i){
        cin >> x[i];
    }
    md = (n>>1);
    for (int mask=1; mask<(1<<md); ++mask){
        s = 0;
        for (int j=0; j<md; ++j){
            if (mask & (1<<j)){
                s += x[j];
            }
            if (s > m) break;
        }
        if (s > m) continue;
        if (s == m){
            cout << "sim" << endl;
            return 0;
        }
        show[m-s] = 1;
    }
    lim = n-md;
    for (int mask=1; mask < (1<<lim); ++mask){
        s = 0;
        for (int j=md; j<n; ++j){
            if (mask & (1<<(j-md))){
                s += x[j];
            }
            if (s > m) break;
        }
        if (s > m) continue;
        if (show[s]){
            cout << "sim" << endl;
            return 0;
        }
    }
    cout << "nao" << endl;
    return 0;
}
