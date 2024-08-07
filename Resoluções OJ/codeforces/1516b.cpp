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

int t, n, s, x, a[MAX], odd;
map<int, int> f;

int main(){_
    for (cin >> t; t--;){
        cin >> n;
        s = 0;
        for (int i=0; i<n; ++i){
            cin >> a[i];
            s ^= a[i];
        }
        odd = 0;
        x = 0;
        int i;
        for (i=0; i<n-1;++i){
            x ^= a[i];
            if (x == s){
                ++odd;
                break;
            }
        }
        x = 0;
        for (int j=i+1; j<n-1; ++j){
            x ^= a[j];
            if (x == s){
                ++odd;
                break;
            }
        }
        cout << (!s || odd==2? "YES" : "NO")  << endl;
    }
    return 0;
}

