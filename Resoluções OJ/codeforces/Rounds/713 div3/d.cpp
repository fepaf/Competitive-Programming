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

i64 t, n, a[MAX], b[MAX], s, e1, e2;

int f(int idx){
    for (int i=0; i<n+2; ++i){
        if (i==idx) continue;
        // W(s-b[idx]-b[i])
        if (b[idx] == s-b[idx]-b[i]){
            return i;
        }
    }
    return -1;
}

int main(){_
    for (cin >> t; t--;){
        cin >> n;
        s = 0;
        for (int i=0; i<n+2; ++i){
            cin >> b[i];
            s += b[i];
        }
        sort(b,b+n+2);
        e1 = f(n);
        e2 = f(n+1);
        if (~e1){
            for (int i=0; i<n+2; ++i){
                if (i==e1 || i==n) continue;
                cout << b[i] << ' ';
            }
            cout << endl;
        } else if (~e2){
            for (int i=0; i<n+2; ++i){
                if (i==e2 || i==n+1) continue;
                cout << b[i] << ' ';
            }
            cout << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}
