#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<20)
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

int n, ans;
int a[MAX];
vi p;

int main(){_
    cin >> n;
    for (int i=1; i<=n; ++i){
        cin >> a[i];
        if (a[i]==i){
            ++ans;
            p.eb(i);
        }
    }
    if (sz(p) > 1){
        cout << (ans+1)/2 << endl;
        for (int i=1; i<ans; i+=2){
            cout << p[i-1] << ' ' << p[i] << endl;
        }
        if (ans & 1){
            cout << p[ans-2] << ' ' << p[ans-1] << endl;
        }
    }
    else {
        cout << 0 << endl;
    }

    return 0;
}
