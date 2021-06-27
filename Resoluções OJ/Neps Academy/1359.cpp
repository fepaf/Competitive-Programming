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

i64 t, n, d[1<<5], fat[1<<5];

int main(){_
    fat[0] = fat[1] = d[2] = 1;
    fat[2] = 2;
    for (int i=3; i<=20; ++i){
        fat[i] = i*fat[i-1];
        d[i] = (i-1)*(d[i-1]+d[i-2]);
    }
    cin >> n;
    i64 mdc = gcd(d[n],fat[n]);
    cout << (d[n]/mdc) << '/' << (fat[n]/mdc) << endl;
    return 0;
}
