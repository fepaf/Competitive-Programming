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

int n, p, ok, ans;
string s;

int main(){_
    cin >> n;
    cin.ignore();
    ok = 1;
    while (n--){
        getline(cin, s);
        if (!ok) continue;
        for (char c : s){
            ans += (c=='{');
            ans -= (c=='}');
            ok &= (ans >= 0);
        }
    }
    cout << (ok && !ans ? 'S' : 'N') << endl;
    return 0;
}