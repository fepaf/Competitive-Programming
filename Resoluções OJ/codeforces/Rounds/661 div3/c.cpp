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

i64 t, n, a[MAX], b[MAX], k, p, ans, team;
set<i64> s;

int main(){_
    for(cin >> t; t--;){
        cin >> n;
        for (int i=0; i<n; ++i){
            cin >> a[i];
        }
        sort(a, a+n);

        for (int i=0; i<n; ++i){
            for (int j=i+1; j<n; ++j){
                s.insert(a[i]+a[j]);
            }
        }
        ans = 0;
        for (i64 si : s){
            k = n-1;
            team = 0;
            for (int j=0; j<n; ++j){
                while (k>-1 && k>j && a[k]+a[j]>si){
                    --k;
                }
                team += (k>-1 && k>j && a[k]+a[j]==si);
                k-= (k>-1 && k>j && a[k]+a[j]==si);
            }
            ans = max(ans, team);
        }
        cout << (ans) << endl;
        s.clear();
    }
    return 0;
}
