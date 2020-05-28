#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<20)
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

using namespace std;

i64 fat[22];
i64 n;
char c;
set <char> cj;
int f[1<<8];

i64 mdc(i64 a, i64 b){
    if (b) return mdc(b, a%b);
    else return a;
}

i64 x, y, m;

int main(){_
    fat[0] = 1;
    for (i64 i=1; i<=20; ++i){
        fat[i] = fat[i-1]*i;
    }
    cin >> n;
    for (i64 i=n; i--;){
        cin >> c;
        f[c]++;
        cj.insert(c);
    }
    y = fat[sz(cj)];
    for (char c : cj){
        y *= fat[f[c]];
    }
    x = fat[n];
    m = mdc(x,y);
    cout << y/m << ' ' << x/m << endl;
    return 0;
}
