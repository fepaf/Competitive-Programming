#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#ifdef ONLINE_JUDGE
#define endl '\n'
#endif
#define INF 0x3f3f3f3f
#define MAX (1<<20)
#define OUT MAX
#define MOD 1000'000'007
#define i64 long long
#define all(x) (x).begin() , (x).end()
#define sz(x) (int)(x).size()
#define ii pair<int, int>
#define fs first
#define sc second
#define eb emplace_back
#define vi vector<int>
#define vvi vector<vi>
#define vii vector<ii>
#define vvii vector<vii>
#define lsb(x) ((x) & (-x))
#define gcd(x,y) __gcd((x),(y))
#define esq(x) (x<<1)
#define dir(x) ((x<<1)|1)
#define W(x) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;

using namespace std;

/*
Problem: Exponetiation
Link: https://cses.fi/problemset/task/1095
*/
 
int t;
int n, a, b;

i64 fexpo(i64 b, i64 e, i64 m){
    i64 ans = 1;

    while (e){
        if (e & 1) ans = (ans * b) % m;
        b = (b * b) %m;
        e >>= 1;
    }

    return ans;
}


int main(){_
    for (cin >> n; n--;){
        cin >> a >> b;
        cout << fexpo(a, b, MOD) << endl;
    }
    return 0;
}
