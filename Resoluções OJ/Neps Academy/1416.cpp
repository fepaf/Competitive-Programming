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

int n, m;

int p_function(string t){
    n = sz(t);
    vi p = vi(n);
    p[0] = 0;
    for (int i=1; i<n; i++){
        p[i] = p[i-1];
        while (t[i] != t[p[i]] && p[i]) p[i] = p[p[i]-1];
        p[i] += (t[i] == t[p[i]]);
        if (p[i]==m) return 1;
    }
    return 0;
}

vi p;
string t, s, r[MAX];

int main(){_
    cin >> t >> s;
    m = sz(s);
    for (int i=0; i<m; ++i){
        r[i] = "";
        for (int j=0; j<m; ++j){
            r[i] += s[(i+j)%m];
        }
        if (p_function(r[i]+"#"+t)){
            cout << "yes" << endl;
            return 0;
        }
    }
    cout << "no" << endl;
    return 0;
}
