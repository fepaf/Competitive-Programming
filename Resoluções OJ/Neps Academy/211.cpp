#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAX (1<<20)
#define INF (0x3f3f3f3f)
#define i64 long long
#define ii pair<int, int>
#define vii vector<ii>
#define vi vector<int>
#define vvi vector<vi>
#define eb emplace_back
#define fs first
#define sc second
#define sz(x) ((int)(x).size())
#define W(x) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;

using namespace std;

int n, l, r, low, high, a, p[MAX], b[MAX], p_min, ans, ant;
priority_queue<ii, vii, greater<ii>> pq;

int main(){_
    cin >> n >> low >> high;

    for (int i=1; i<=n; ++i){
        cin >> a;
        p[i] = p[i-1] + a;
    }
    
    for (int i=1; i<=n; ++i){
        cin >> a;
        b[i] = b[i-1] + a;
    }

    l = r = 0;
    ans = -INF;
    for (int i=1; i<=n; ++i){

        ant = r;
        while (b[i]-b[r] >= low && r<=i){
            pq.push({p[r],r});
            ++r;
        }
        r -= (r != ant);

        while ((b[i]-b[l] > high) && (l < r)){
            ++l;
        }

        while (!pq.empty() && pq.top().sc < l){
            pq.pop();
        }

        if (!pq.empty() && b[i]-b[r] >= low){
            p_min = pq.top().fs;
            ans = max(ans, p[i]-p_min);
        }
    }

    cout << ans << endl;

    return 0;
}