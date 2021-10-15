#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#ifdef ONLINE_JUDGE
#define endl '\n'
#endif
#define INF 0x3f3f3f3f
#define MAX (1<<20)
#define OUT MAX
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
#define esq(x) (x<<1)
#define dir(x) ((x<<1)|1)
#define W(x) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;

using namespace std;

/*
Problem: Bit Problem
Link: https://cses.fi/problemset/task/1654
*/
 
int n, sub[MAX], sup[MAX], zero[MAX], x[MAX];

int main(){_
    cin >> n;
    int u = (1<<20)-1;
    for (int i=n; i--;){
        cin >> x[i];
        ++sub[x[i]];
        ++sup[u^x[i]];
    }
    for (int i=0; i<20; ++i){
        for (int mask=0; mask<(1<<20); ++mask){
            if (mask & (1<<i)){
                sub[mask] += sub[mask^(1<<i)];
                sup[mask] += sup[mask^(1<<i)];
            }
        }
    }
    for (int i=n; i--;){
        cout << sub[x[i]] << ' ' << sup[u^x[i]] << ' ' << n-sub[u^x[i]] << endl;
    }
    return 0;
}
