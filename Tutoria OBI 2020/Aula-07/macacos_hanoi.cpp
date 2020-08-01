#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAX (1<<20) // aproximdamente 1000,
#define MOD (int)(86400)
#define i64 long long
#define sz(x) (int)(x).size()
#define fs first
#define sc second
#define pb push_back
#define eb emplace_back
#define ii pair<int, int>
#define vi vector<int>
#define vii vector<ii>
#define all(x) (x).begin(), (x).end()

using namespace std;

i64 fexpo(i64 b, i64 e, i64 m){
    i64 ans = 1;
    while (e){
        if (e&1) ans = (ans*b)%m;
        b = (b*b)%m;
        e >>= 1;
    }
    return ans;
}

i64 ans, bm, d, h, m, s;
string x;

int main(){_
    cin >> x;
    ans = 1;
    for (char c : x){
        d = c-'0';
        ans = (fexpo(ans, 10, MOD)*fexpo(2, d, MOD))%MOD;
    }
    ans = (ans - 1 + MOD) % MOD;
    s = ans%60;
    ans /= 60;
    m = ans%60;
    ans /= 60;
    h = (ans%24);
    cout << (h <10 ? "0" : "") << h << ":";
    cout << (m <10 ? "0" : "") << m << ":";
    cout << (s <10 ? "0" : "") << s << endl;
    
    return 0;        
}