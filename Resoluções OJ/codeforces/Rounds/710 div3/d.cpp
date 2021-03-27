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

int t, n, a;
map<int, int> f;
priority_queue<int> pq;

int main(){_
    for (cin >> t; t--;){
        cin >> n;
        for (int i=n; i--;){
            cin >> a;
            f[a]++;
        }
        for (auto [k, v] : f){
            pq.push(v);
        }
        
        while (sz(pq)>1){
            int x = pq.top(); pq.pop();
            int y = pq.top(); pq.pop();
            if (x-1>0) pq.push(x-1);
            if (y-1>0) pq.push(y-1);
        }
        cout << (pq.empty() ? 0 : pq.top()) << endl;
        if (!pq.empty()) pq.pop();
        f.clear();
    }
    return 0;
}
