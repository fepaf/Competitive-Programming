#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define sz(x) ((int) (x).size())


using namespace std;

long long n, ans, t, atu;
string s;

int main(){_
    cin >> n >> s;

    ans = 0;
    for (char c : s){
        ans += ((c == '1')<<1);
    }

    // ans = (ans << 1); // ans  = ans *2;

    t = ((int) s.size());
    //t = sz(s)

    atu = t/n;
    for (int i=0; i<atu; ++i){
        ans += i;
    }

    cout << ans << endl;

    return 0;
}
