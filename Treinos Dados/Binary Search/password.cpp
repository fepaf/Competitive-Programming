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

vi p_function(string t){
    int n = sz(t);
    vi p = vi(n);
    p[0] = 0;
    for (int i=1; i<n; i++){
        p[i] = p[i-1];
        while (t[i] != t[p[i]] && p[i]) p[i] = p[p[i]-1];
        p[i] += (t[i] == t[p[i]]);
    }
    return p;
}

int n;
vi a, p;
string s, t;


int main(){_
    cin >> s;
    n = sz(s);
    p = p_function(s);

    for (int i=0; i<p[n-1]; ++i){
        t += s[i];
    }
    p = p_function(t+'#'+s);

    int m = sz(t);
    for (int i=m; i<n+m+1; ++i){
        if (p[i]==m){
            i -= (m+1);
            if (i>0 && i<n-1){
                cout << t << endl;
                return 0;
            }
        }
    }
    cout << "Just a legend" << endl;
    return 0;
}
