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

int fexpo(int b, int e, int m){
    int ans = 1;
    while (e){
        if (e&1) ans = (ans*b)%m;
        b = (b*b)%m;
        e >>= 1;
    }
    return ans;
}

i64 ans, bm, d;
string b, e;

int main(){_
    while (cin >> b >> e){
        bm = 0;
        for (char c : b){
            d = c-'0';
            bm = (10*bm+d)%9;
        }
        ans = 1;
        for (char c : e){
            d = c-'0';
            ans = (fexpo(ans, 10, 9)*fexpo(bm, d, 9))%9;
        }
        cout << (ans ? ans : 9) << endl;
    }
    return 0;        
}