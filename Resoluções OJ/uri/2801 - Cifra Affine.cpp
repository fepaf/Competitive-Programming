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

i64 inv(i64 a, i64 b){
    return a>1? b-inv(b%a,a)*b/a : 1LL;
}

int n, a, b, t, m[MAX], d[MAX];

int main(){_
    while (cin >> n){
        for (int i=0; i<n; ++i){
            cin >> m[i];
        }
        cin >> t >> a >> b;
        if (gcd(a,t)!=1){
            cout << "DECIFRAGEM AMBIGUA" << endl;
            return 0;
        }
        for (int i=0; i<n; ++i){
            d[i] = (((m[i]-(b%t)+t)%t)*inv(a,t))%t;
            cout << d[i] << (i<n-1 ? ' ' : '\n');
        }
    }
    return 0;
}
