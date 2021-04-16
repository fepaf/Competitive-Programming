#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
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

int a, b, x, n, f[2];
string s;

int main(){_
    cin >> a >> b >> x;
    f[0]=a;
    f[1]=b;

    int c= (f[0] < f[1]);
    for (int i=0; i<=x; ++i){
        s+=(c+'0');
        f[c]--;
        c^=1;
    }
    for (int i=0; i<sz(s); i++){
        if (s[i]=='0'){
            for(int j=0; j<f[0]; ++j) s.insert(i,"0");
            f[0]=0;
        } else {
            for(int j=0; j<f[1]; ++j) s.insert(i,"1");
            f[1]=0;
        }
    }
    cout << s << endl;
    return 0;
}
