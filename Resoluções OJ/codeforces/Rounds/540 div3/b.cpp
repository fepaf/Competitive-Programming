#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define i64 long long
#define endl '\n'
#define INF 0x3f3f3f3f
#define VISITED 1
#define UNVISITED -1
#define MAX (1<<20)
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define vvi vector<vi>
#define eb emplace_back
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define lsb(x) (x & -x)

using namespace std;



int n,a[MAX],tp,ti,ans,si,sp;

int main(){_
    while (cin >> n){
        ans = tp = ti = 0;
        for (int i=0; i<n; ++i){
            cin >> a[i];
            i&1 ? ti+=a[i] : tp +=a[i];
        }
        si = sp = 0;
        for (int i=0; i<n; ++i){
            ans += (i&1 ? (si+(tp-sp) == sp + (ti-si-a[i])) : (sp+(ti-si) == si + (tp-sp-a[i])));
            i&1 ? si+=a[i] : sp+=a[i];
        }
        cout << ans << endl;
    }

	return 0;
}
