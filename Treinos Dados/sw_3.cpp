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
Problem: Dado um array de A[1..N] de inteiros, tamanho o maior subarray que contém no máximo K elementos distintos. 
*/

int n, k, a[MAX], l, r, s, ans;
map<int, int> f;

int main(){_
    cin >> n >> k;

    for (int i=0; i<n; ++i){
        cin >> a[i];
    }

    l = r = 0;
    ans = 0;
    while (r < n){
        f[a[r]]++;

        while (f.size()>k){
            f[a[l]]--;

            if (f[a[l]]==0){
                f.erase(a[l]);
            }

            l++;
        }

        ans = max(ans, r-l+1);

        r++;
    }

    cout << ans << endl;

    return 0;
}
