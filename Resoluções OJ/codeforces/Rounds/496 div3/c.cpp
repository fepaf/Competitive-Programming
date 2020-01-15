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

i64 n;
vi a;
map<i64,int> vis, ok;

int find(i64 x){
    if ((x-lsb(x))==0 && x>1){
        if (vis[x]>1) ok[x] = 1;
        return vis[x]>1;
    }
    for (i64 i=63; i--;){
        if ((1LL<<i) < x) break;
        if (x==1 && i==1){
            if (vis[1]>1) ok[1]=1;
            return (vis[1]>1);
                
        }
        if (vis.find((1LL<<i)-x) != vis.end()){
            return 1;
            ok[x] = 1;
            ok[(1LL<<i)-x]=1;
        }
    }
    return 0;
}

int f(i64 x, int k){
    for (int i=63; i--;){
        if ((1LL<<i) < x) break;
        int p = (lower_bound(a.begin(),a.end(),(1LL<<i)-x)-a.begin());
        if ((p!=k && p<n) || (p==k && p<n-1 && a[p+1]==x)){
            cout << "p " << p << endl;
            return 1;
        }
    }    
    return 0;
}

int main(){_
    cin >> n;
    a = vi(n);
    for (int i=0; i<n; ++i){
        cin >> a[i];
        vis[a[i]]++;
    }
    int ans = 0;
    sort(all(a));
    for (int i=0; i<n; ++i){
         (!find(a[i]));
    }
    for (int x : a){
        ans += (ok[x]==0);
    }
    cout << ans << endl;
	return 0;
}
