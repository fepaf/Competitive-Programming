#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
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

using namespace std;

int n, p, posi, posj, ans, cx, ant, suc, d;
vi q;

int main(){_
    while ((cin >> n >> p) && (n || p)){
        q = vi(p+2);
        for (int i=1; i<=p; ++i){
            cin >> q[i];
            for (int j=1; j<=q[i]; ++j){
                cin >> cx;
                if (cx==1){
                    posi = i;
                    posj = j;
                }
            }
        }
        ans = q[posi]-posj;

        ant = 0;
        for (int i=posi-1; i>=1; --i){
            d = max(q[i]-posj+1, 0);
            if (!d) break;
            ant += d;
        }

        suc = 0;
        for (int i=posi+1; i<=p; ++i){
            d = max(q[i]-posj+1, 0);
            if (!d) break;
            suc += d;
        }

        ans += min(ant, suc);

        cout << ans << endl;

        q.clear();
    }
    return 0;
}
