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

int a[MAX], ps[10][MAX], n, m, mov[MAX], ans[10];

int main(){_
    cin >> n >> m;
    for (int i=1; i<=n; ++i){
        cin >> a[i];
        ps[a[i]][i] = 1;
    }
    for (int i=1; i<=n; ++i){
        for (int d=10; d--;){
            ps[d][i] += ps[d][i-1];
        }
    }
    mov[0]=1;
    for (int i=1; i<=m; ++i){
        cin >> mov[i];
        int l = min(mov[i-1], mov[i]);
        int r = max(mov[i-1], mov[i]);
        for (int d=10; d--;){
            ans[d] += ps[d][r] - ps[d][l-1];
        }
        --ans[a[mov[i-1]]];
    }
    ++ans[a[mov[1]]];
    for (int d=0; d<10; ++d){
        cout << ans[d] << ' ';
    }
    cout << endl;
    return 0;
}
