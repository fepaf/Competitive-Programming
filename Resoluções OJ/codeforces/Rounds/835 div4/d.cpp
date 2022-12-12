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

int t, n,a[MAX], diff, ant, d, ans;

int main(){_
    for (cin >> t; t--;){
        cin >> n;
        ant = ans = 0;
        for (int i=0; i<n; ++i){
            cin >> a[i];
            if (i){
                diff = (a[i]-a[i-1]);
                d = (diff/(diff ? abs(diff) : 1));
                if (d){
                    ans |= (d==1 && ant==-1);
                    ant = d;
                }
            }
        }
        cout << (ans ? "YES" : "NO") << endl;
    }
    return 0;
}
