#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAX (1<<20) // aproximdamente 1000,
#define MOD (int)(1e9+7)
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

i64 inv(i64 a, i64 b){
    return a>1 ? b-inv(b%a,a)*b/a : 1;
}

i64 fat[MAX], ans, f[256], n;
string s;

int main(){_
    fat[0] = 1;
    for (int i=1; i<=100123; ++i){
        fat[i] = (fat[i-1]*i)%MOD;
    }
    while (cin >> s){
        ans = fat[sz(s)];
        for (char c : s){
            f[c]++;
        }
        for (int i='a'; i<='z'; ++i){
            ans = (ans * inv(fat[f[i]], MOD))%MOD;
            f[i] = 0;
        }
        cout << ans << endl;
    }
    return 0;        
}