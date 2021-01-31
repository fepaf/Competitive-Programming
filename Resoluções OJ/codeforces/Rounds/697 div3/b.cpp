#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
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

using namespace std;

int t, n;
int can[MAX];
vi a, b;

int main(){_
    for (int i=2020; i<MAX; i+= 2020){
        a.eb(i);
    }
    for (int j=2021; j<MAX; j+= 2021){
            b.eb(j);
    }
    for (int ai : a){ 
        for (int bi : b){
            can[ai] = can[bi] = 1;
            if (ai+bi<MAX){
                can[ai+bi] = 1;
            }
        }
    }
    for (cin >> t; t--;){
        cin >> n;
        cout << (can[n] ? "YES" : "NO") << endl;
    }
    return 0;
}
