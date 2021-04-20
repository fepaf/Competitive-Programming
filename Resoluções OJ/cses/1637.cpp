#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF (0x3f3f3f3f)
#define MAX (1<<20)
#define MOD 1000000007
#define i64 long long
#define all(x) (x).begin() , (x).end()
#define sz(x) (int)(x).size()
#define ii pair<i64, i64>
#define fs first
#define sc second
#define eb emplace_back
#define vi vector<i64>
#define vvi vector<vi>
#define vii vector<ii>
#define vvii vector<vii>
#define lsb(x) ((x) & (-x))
#define gcd(x,y) __gcd((x),(y))
#define W(x) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;
#define branco 0
#define cinza -1
#define preto 1

using namespace std;

/*
Problem: Removing Digits
Link: https://cses.fi/problemset/task/1637
*/

int n, f[MAX], r;

int main(){_
    f[0] = 0;
    for (int i=1; i<=9; ++i){
        f[i] = 1;
    }
    for (int i=10; i<MAX; ++i){
        f[i] = INF;
        for (int x=i; x; x/=10){
            r = x%10;
            if (!r) continue;
            if (i>=r) f[i] = min(f[i], f[i-r]+1);
        }
    }
    cin >> n;
    cout << f[n] << endl;
    return 0;     
}
