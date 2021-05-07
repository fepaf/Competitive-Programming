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
#define W(x) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;

using namespace std;

int t, n, a, c[3], me;

int main(){_

    for (cin >> t; t--; ){
        cin >> n;
        c[0] = c[1] = c[2] = 0;
        for (int i=0; i<n; ++i){
            cin >> a;
            ++c[a%3];
        }
        W(c[0])
        W(c[1])
        W(c[2])
        me = min({c[0],c[1],c[2]});
        for (int i=0; i<3; ++i){
            if (c[i]==me){
                me = i;
                break;
            }
        }
        for (int i=me)
        cout <<  << endl;
    }
    return 0;
}
