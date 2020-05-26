#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
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

int p, s, u, v;
int ft[MAX];

void update(int idx, int v){
    while (idx<=p+2){
        ft[idx] += v;
        idx += lsb(idx);
    }
}

int query(int idx){
    int ans = 0;
    while (idx>0){
        ans += ft[idx];
        idx -= lsb(idx);
    }
    return ans;
}


int main(){_
    cin >> p >> s;
    while (s--){
        cin >> u >> v;
        update(u+1, 1);
        update(v+1, -1);
    }
    for (int i=1;i<=p+2; ++i){
        if(query(i)){
            cout << i-1 << ' ';
            while (query(i) && i<=p+2) ++i;
            --i;
            cout << i << endl;
        }
    }
    cout << endl;
    return 0;
}
