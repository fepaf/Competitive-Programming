#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#ifdef ONLINE_JUDGE
#define endl '\n'
#endif
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
#define vi vector<i64>
#define vvi vector<vi>
#define vii vector<ii>
#define vvii vector<vii>
#define lsb(x) ((x) & (-x))
#define gcd(x,y) __gcd((x),(y))
#define esq(x) (x<<1)
#define dir(x) ((x<<1)|1)
#define W(x) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;

using namespace std;

/*
Problem: Sticks Division
Link: https://cses.fi/problemset/task/1161
*/
 
i64 n, x, s, ans, d;
priority_queue<i64, vi, greater<i64>> pq;

int main(){_
    cin >> x >> n;
    for (int i=n; i--;){
        cin >> d;
        pq.push(d);
    }
    while (sz(pq)>=2){
        i64 d1 = pq.top(); pq.pop();
        i64 d2 = pq.top(); pq.pop();
        ans += d1+d2;
        pq.push(d1+d2);
    }
    cout << ans << endl;
    return 0;
}
