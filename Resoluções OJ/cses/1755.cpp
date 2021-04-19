#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF (2e18)
#define MAX (1<<20)
#define MOD 1000000007
#define i64 long long
#define all(x) (x).begin() , (x).end()
#define sz(x) (int)(x).size()
#define ii antr<int, int>
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
#define branco 0
#define cinza -1
#define preto 1

using namespace std;

/*
Problem: Palindrome Reorder
Link: https://cses.fi/problemset/task/1755
*/

int f[26], n, cnt;
string s;
char mid;

int main(){_
    cin >> s;
    n = sz(s);
    for (char c : s){
        ++f[c-'A'];
    }
    for (int i=26; i--;){
        if (f[i]&1){
            ++cnt;
            mid = i+'A';
        }
    }
    if (cnt>1 || ((n&1) ^ cnt)){
        cout << "NO SOLUTION" << endl;
        return 0;
    }
    
    if (cnt){
        s[n>>1] = mid;
        --f[mid-'A'];
    }
    int t=0;
    for (int i=26; i--;){
        while (f[i]){
            s[t] = s[n-1-t] = i+'A';
            f[i]-=2;
            ++t;
        }
    }
    cout << s << endl;
    return 0;     
}
