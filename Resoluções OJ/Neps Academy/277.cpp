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

int c, n, p, v;
map<int, int> vel, nov;

int main(){_
    cin >> c >> n;
    while (c--){
        cin >> p >> v;
        vel[p] = v;
        nov[p] = v;
    }
    while (n--){
        cin >> p >> v;
        if (v > nov[p]) nov[p] = v;
    }
    for (auto par : nov){
        if (par.sc > vel[par.fs]) cout << par.fs << ' ' << par.sc << endl;
    }
    return 0;
}