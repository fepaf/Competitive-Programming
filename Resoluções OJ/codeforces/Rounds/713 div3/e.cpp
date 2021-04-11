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

int t, n, l, r, s, k, a1, d, ok, p[MAX];

int pa(int a1, int k){
    return ((2*a1+k-1)*k)>>1;
}

int main(){_
    for (cin >> t; t--;){
        cin >> n >> l >> r >> s;
        k = r-l+1;
        if (s < pa(1, k) || s > pa(n-k+1,k)){
            cout << -1 << endl;
        }
        else {
            d = 0;
            a1 = 0;
            for (int i=1; i<=n; ++i){
                p[i] = i;
            }
            for (int i=1; i<=n-k+1; ++i){
                if (pa(i, k) >= s){
                    a1 = i;
                    d = pa(i, k)-s;
                    break;
                }
            }
            for (int i=a1+d-1; i>=a1; --i){
                swap(p[i], p[i-1]);
            }
            for (int i=1; i<=n; ++i){
                cout << p[((i-1-(l-a1)+n)%n)+1] << ' ';
            }
            cout << endl;
        }
    }
    return 0;
}
