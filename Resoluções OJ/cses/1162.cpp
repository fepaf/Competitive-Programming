#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#ifdef ONLINE_JUDGE
#define endl '\n'
#endif
#define INF (2e18)
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
#define branco 0
#define cinza -1
#define preto 1

using namespace std;

/*
Problem: Sorting Methods
Link: https://cses.fi/problemset/task/1162
*/

int n, p[MAX], ft1[MAX], pos[MAX], b[MAX], x, y;
i64 ft[MAX], ans[4], lis[MAX];

void update(int idx, i64 val){
    while (idx<=n){
        ft[idx] += val;
        idx += lsb(idx);
    }
}

i64 query(int idx){
    i64 ans = 0;
    while (idx>0){
        ans += ft[idx];
        idx -= lsb(idx);
    }
    return ans;
}

void update1(int idx, int val){
    while (idx<=n){
        ft1[idx] = max(ft1[idx], val);
        idx += lsb(idx);
    }
}

int query1(int idx){
    int ans = 0;
    while (idx>0){
        ans = max(ft1[idx], ans);
        idx -= lsb(idx);
    }
    return ans;
}


int main(){_
    cin >> n;
    for (int i=1; i<=n; ++i){
        cin >> p[i];
        pos[p[i]] = i;
    }
    for (int i=n; i>=1; --i){
        ans[0] += query(p[i]);
        update(p[i],1);
    }
    
    ans[3] = 1;
    for (int i=n-1; i>=1; --i){
        if (pos[i] < pos[i+1]) ++ans[3];
        else break;
    }
    ans[3] = n-ans[3];
    
    for (int i=1; i<=n; ++i){
        lis[i] = 1+query1(p[i]);
        update1(p[i], lis[i]);
        ans[2] = max(ans[2], lis[i]);
    }
    ans[2] = n-ans[2];

    for (int i=1; i<=n; ++i){
        if (p[i] != i){
            ++ans[1];
            swap(p[i],p[pos[i]]);
            swap(pos[p[i]], pos[p[pos[i]]]);
        }
    }
    cout << ans[0] << ' ' << ans[1] << ' ' << ans[2] << ' ' << ans[3] << endl;
    return 0;     
}
