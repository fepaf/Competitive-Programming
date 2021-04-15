#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAXB (22)
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

int n, f[1<<MAXB], a[1<<(MAXB-2)];

int main(){_
    cin >> n;
    for (int i=0; i<(1<<MAXB); ++i){
        f[i]=-1;
    }
    for (int i=0; i<n; ++i){
        cin >> a[i];
        f[a[i]] = a[i];
    }
    for (int i=0; i<MAXB; ++i){
        for (int mask=0; mask<(1<<MAXB); ++mask){
            if ((mask&(1<<i))&&(~f[mask^(1<<i)])){
                f[mask] = f[mask^(1<<i)];
            }
        }
    }
    for (int i=0; i<n; ++i){
        cout << f[((1<<MAXB)-1)^a[i]] << ' ';
    }
    cout << endl;
    return 0;
}
