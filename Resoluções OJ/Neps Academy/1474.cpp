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

string s, o, a="LMS";
int d[1<<8][1<<8], w, ans, g;
char x, y;

int main(){_
    cin >> s;
    o = s;
    
    sort(all(o));
    
    for (int i=0; i<sz(s); ++i){
        if (o[i]!=s[i]){
            d[o[i]][s[i]]++;
        }
    }
    
    for (int i=0; i<3; ++i){
        for (int j=i+1; j<3; ++j){
            x = a[i], y = a[j];
            w = min(d[x][y], d[y][x]);
            d[x][y]-= w;
            d[y][x]-= w;
            ans += w;
        }
    }
    for (char x : a){
        for (char y : a){
            g += (d[x][y]);
        }
    }
    ans += (g<<1)/3;
    cout << ans << endl;
    return 0;
}
