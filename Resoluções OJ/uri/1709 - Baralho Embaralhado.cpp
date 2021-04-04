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

int n, p[MAX], a[MAX], cnt, x, ans;

int main(){_
    cin >> n;
    cnt = 1;
    for (int i=2; i<=n; i+=2){
        a[i] = (cnt++);
    }
    for (int i=1; i<=n; i+=2){
        a[i] = (cnt++);
    }
    for (int i=1; i<=n; ++i){
        p[a[i]] = i;
    }
    x = 1;
    do{
        ++ans;
        x = p[x];
    } while (x != 1);
    cout << ans << endl;
    return 0;
}
