#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define INF 0x3f3f3f3f
#define vi vector<int>
#define all(x) (x).begin() , (x).end()
#define eb emplace_back
#define fs first
#define sc second
#define mdc(x,y) __gcd((x),(y))
#define mmc(x,y) ((x)/mdc((x),(y)))*y
#define lsb(x) ((x)&-(x))

using namespace std;

int n,cmdc;
vi d,comum;
map<int,int> f;

int main(){_
    // cout << mdc(458,256) << ' ' << mmc(48,20) << endl;
    cin >> n;
    d = vi(n);
    cmdc = 0;
    for (int i=n; i--;){
        cin >> d[i];
        if (++f[d[i]]>1){
            comum.eb(d[i]);
            cmdc = max(cmdc,d[i]);
        }
    }



    sort(all(d),greater<int>());

    for (int i=0; i<n; ++i){
        for (int j=i+1; j<n; ++j){
            int x = d[i], y = d[j];
            if (x*y == mmc(x,y)*cmdc){
                cout << x << ' ' << y << endl;
                return 0;
                exit(0);
            }
        }
    }

    return 0;
}
