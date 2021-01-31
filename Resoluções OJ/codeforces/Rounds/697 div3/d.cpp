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

int t, n, m, k, t1, t2;
int a[MAX], b[MAX], ans;
vi b1, b2;

int main(){_
    for (cin >> t; t--;){
        cin >> n >> m;

        for (int i=0; i<n; ++i){
            cin >> a[i];
        }

        for (int i=0; i<n; ++i){
            cin >> b[i];
            if (b[i]==1){
                b1.eb(a[i]);
            }
            else {
                b2.eb(a[i]);
            }
        }
        sort(all(b1), greater<int>());
        sort(all(b2), greater<int>());

        t1 = sz(b1);
        t2 = sz(b2);

        ans = INF;
        int parc = 0;
        int mmy = 0;
        int j = -1;
        
        while (j+1 < t2 && mmy < m){
            ++j;
            mmy += b2[j];
            parc += 2;
        }
        if (mmy >= m) ans = min(ans, parc);

        
        for (int i=0; i<t1; i++){
            mmy += b1[i];
            ++parc;

            while (j >= 0 && mmy-b2[j] >= m){
                mmy -= b2[j];
                --j;
                parc -= 2;
            }
            if (mmy >= m) ans = min(ans, parc);
        }

        cout << (ans == INF ? -1 : ans) << endl;
        b1.clear();
        b2.clear();
    }
    return 0;
}
