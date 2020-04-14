#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

struct ret{
    int l, b, r, t;
};

int n;
ret r, ans;
int test;

int main(){_
    while ((cin >> n) && n){
        ans  = {INT_MIN, INT_MIN, INT_MAX, INT_MAX};
        while (n--){
            cin >> r.l >> r.t >> r.r >> r.b;
            ans.l = max(ans.l, r.l);
            ans.r = min(ans.r, r.r);
            ans.b = max(ans.b, r.b);
            ans.t = min(ans.t, r.t);
        }
        cout << "Teste " << ++test << endl;

        if (ans.l <= ans.r && ans.b <= ans.t){
            cout << ans.l << ' ' << ans.t << ' ' << ans.r << ' ' << ans.b << endl;
        }
        else {
            cout << "nenhum" << endl;
        }
        cout << endl;
    }
    return 0;
}