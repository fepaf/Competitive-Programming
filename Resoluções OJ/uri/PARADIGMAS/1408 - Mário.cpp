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

int ler(){
    int n;
    scanf("%i",&n);
    return n;
}

int n, l, ans, qfree;
vi liv;

int busca(int x, int lim){
    int lo=0;
    int hi=lim;
    int mid;
    
    while (lo < hi){
        mid = lo + (hi-lo)/2;

        if (liv[mid] > x) hi = mid;
        else lo = mid+1;
    }

    return lo;
}

int main(){_
    while ((cin >> n >> l) && (n || l)){
        liv = vi(l+1);
        liv.eb(0);
        ans = INT_MAX;
        for (int i=1; i<=l; ++i){
            cin >> liv[i];
            int p = liv[i];
            qfree = (i - (busca(max(p-n,0), i)-1));
            ans = min(ans, n-qfree);
        }
        cout << ans << endl;
    }
    return 0;
}
