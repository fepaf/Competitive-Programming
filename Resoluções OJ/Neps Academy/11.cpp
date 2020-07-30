#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define W(x) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;
#define i64 long long
#define INF 1234567890
#define MAX (1<<17)
#define sz(x) (int)((x).size())
#define ii pair<int, int>
#define fs first
#define sc second
#define vi vector<int>
#define vii vector<ii>
#define eb emplace_back
#define pb push_back

using namespace std;

int ans[8], n, x, fat, xut;

int main(){_
    cin >> n;
    fat = 1;
    for (int i=1; i<=n; ++i){
         xut ^= i;
         fat *= i;
    }
    for (int i=0; i<n; ++i){
         ans[i] = ((fat/n)&1 ? xut : 0);
    }
    while (--fat){
        for (int i=0; i<n; ++i){
            cin >> x;
            ans[i] ^= x;
        }
    }
    for (int i=0; i<n; ++i){
        cout << ans[i] << ' ';
    }
    cout << endl;
    return 0;
}
