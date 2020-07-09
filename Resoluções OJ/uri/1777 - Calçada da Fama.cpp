#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<20)
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
#define W(x) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;

using namespace std;

int t, n, c, a, b, e, pos, ans, l, r;
set<ii> pst;
vii p;
vi x;

int main(){_
    scanf("%i", &t);
    for (int caso=1; caso<=t; ++caso){
        scanf("%i %i", &n, &c);
        while (c--){
            scanf("%i %i", &a, &b);
            pst.insert({a,b});
        }
        pst.insert({INF, INF});

        pst.erase({l = pst.begin()->fs, r = pst.begin()->sc});
        for (auto [a, b] : pst){
            if (a <= r) {
                r = max(r, b);
            }else{
                p.eb(l,r);
                l = a, r = b;
            }   
        }
        
        scanf("%i", &e);
        x = vi(e);
        for (int &xi : x){
            scanf("%i", &xi);
        }
        sort(all(x));
        
        ans = pos = 0;
        for (auto [a, b] : p){
            for (;pos < e && x[pos] < a; ++pos);

            for (;pos < e && x[pos] <= b; ++pos){
                ++ans;
            }
        }
 
        printf("Caso #%i: %i\n", caso, ans);
        pst.clear();
        p.clear();
    }
    return 0;
}
