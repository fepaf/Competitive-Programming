#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
// #define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<20)
#define MOD 1000000007
#define i64  long long
#define all(x) (x).begin() , (x).end()
#define sz(x) (int)(x).size()
#define ii pair<int, int>
#define fs first
#define pi 2*acosl(0.0)
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

int a[MAX], n, psa[MAX], ans, me;
deque<int> dq;

int main(){_
    while (cin >> n){
        for (int i=1; i<=n; ++i){
            cin >> a[i];
            a[i+n] = a[i];
        }
        ans = 0;
        dq.push_back(0);
        for (int i=1; i<=n+n-1; ++i){
            while (!dq.empty() && dq.front() < i-n){ // < e nao <=, muito importante
                dq.pop_front();
            }

            psa[i] = psa[i-1] + a[i];
            ans = max(ans, psa[i]-psa[dq.front()]);
            
            while (!dq.empty() && psa[i] <= psa[dq.back()]){
                dq.pop_back();
            } 
            dq.push_back(i);

        }
        cout << ans << '\n';
    }
}
