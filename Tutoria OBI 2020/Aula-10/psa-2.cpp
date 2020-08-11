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

int t, a[MAX], psa[MAX], n, ans, s, men;

/*
maior soma de um subvetor
*/

int main(){_
    cin >> n;
    for (int i=1; i<=n; ++i){
        cin >> a[i];
    }
    for (int i=1; i<=n; ++i){
        psa[i] = psa[i-1] + a[i];
    }
    // for (int i=1; i<=n; ++i){
    //     ans = max(ans, psa[i] - psa[menor_sum]);
    //     if (psa[i] < psa[menor_sum]) menor_sum = i;
    // }
    for (int i=1; i<=n; ++i){
        s += a[i];
        ans = max(ans, s - men);
        men = min(men, s);
    }
    
    cout << ans << endl;  
    return 0;
}
