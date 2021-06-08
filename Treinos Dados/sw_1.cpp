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

/*
Problema: Dado um array de A[1..N], dizer a maior soma de um subarray de tamanho fixo K.
*/

int n, k, a[MAX], l, r, s, ans;

int main(){_
    cin >> n >> k;

    for (int i=0; i<n; ++i){
        cin >> a[i];
    }

    
    s = 0;

    for (int i=0; i<k; ++i){
        s += a[i];
    }
    ans = s;

    l = 0; r = k;
    for (int i=k; i<n; ++i){
        s += (a[i]-a[i-k]);
        l++;
        r++;
        ans = max(ans, s);
    }

    cout << ans << endl;
    return 0;
}
