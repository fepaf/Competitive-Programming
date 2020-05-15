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

int t, n, k;
int a[50], b[50];

int main(){_
    cin >> t;
    while (t--){
        cin >> n >> k;
        for (int i=0; i<n; ++i){
            cin >> a[i];
        }
        for (int i=0; i<n; ++i){
            cin >> b[i];
        }
        sort(a,a+n);
        sort(b,b+n);
        int ans = 0;
        for (int i=0;i<n-k; ++i){
            ans+=a[n-1-i];
        }
        for (int i=0;i<k; ++i){
            ans+= max(a[i],b[n-1-i]);
        }
        cout << ans << endl;
        
    }
    return 0;
}
