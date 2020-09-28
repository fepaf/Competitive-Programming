#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
// #define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<20)
#define MOD 1000000007
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
#define W(x) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;
#define UNCALCULED -1

using namespace std;

int memo[MAX];
int n, k;
int a[MAX];

//  subsequencia do array onde todos os slecionados distam no minimo k posições 

int f(int i){
    if (i>n) return 0;

    if (memo[i] != UNCALCULED) return memo[i];

    if (i<=n){
        return memo[i] = max(a[i]+f(i+k), f(i+1));
    }
}


int main(){_

    for (int i=1000002; i--;){
        memo[i] = UNCALCULED;
    }

    cin >> n >> k;
    for (int i=1; i<=n; ++i){
        cin >> a[i];
    }

    cout << f(1) << endl;
    return 0;
}
