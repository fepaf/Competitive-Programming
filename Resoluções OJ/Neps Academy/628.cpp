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

int t, c[5], test, n, ans, x, y, maf;
map<int, int> f;
set<ii> cj;

int main(){_
    for (cin >> t; t--;){
        for (int i=5; i--;){
            cin >> c[i];
            ++f[c[i]];
        }
        for (auto [k, v] : f){
            cj.insert({v,k});
        }
        n = sz(cj);
        maf = cj.rbegin()->fs, x = cj.rbegin()->sc;
        if (n==1){
            ans = (x + 180);
        } else if (n==2){
            if (maf == 4) ans = x+180;
            else ans = x+160;
        } else if (n==3){
            cj.erase(cj.begin());
            y = cj.begin()->sc;
            if (maf == 3) ans = x+140;
            else ans = 3*x + 2*y+20;
        } else if (n==4){
            ans = x;
        } else if (n==5){
            sort(c,c+5);
            if (c[4]==c[3]+1 && c[3]==c[2]+1 && c[2]==c[1]+1 && c[1]==c[0]+1) ans = c[0]+200;
            else ans = 0;
        }
        cout << "Teste " << ++test << endl << ans << endl << endl;
        f.clear();
        cj.clear();
    }
    return 0;
}
