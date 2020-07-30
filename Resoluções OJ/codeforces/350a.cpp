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

int a[MAX], b[MAX], n, m;

int main(){_
    cin >> n >> m;
    for (int i=n; i--;){
        cin >> a[i];
    }
    for (int i=m; i--;){
        cin >> b[i];
    }
    for (int v=1; v<= 100; ++v){
        int ok = 0;
        for (int i=n; i--;){
            ok |= (v >= 2*a[i]);
        }
        for (int i=m; i--;){
            ok &= (v < b[i]);
        }
        for (int i=n; i--;){
            ok &= (v >= a[i]);
        }
        if (ok){
            cout << v << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}
