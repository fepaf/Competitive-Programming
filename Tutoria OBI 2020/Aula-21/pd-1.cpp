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

int memo[1000002];

//fibonacci

int f(int n){
    if (n<=2) return 1;

    if (memo[n] != UNCALCULED) return memo[n];

    if (n>2){
        return memo[n] = f(n-1) + f(n-2);
    } 
}

int main(){_

    for (int i=1000002; i--;){
        memo[i] = UNCALCULED;
    }
    int n;
    cin >> n;
    cout << f(n) << endl;
    return 0;
}
