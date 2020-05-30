#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
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

using namespace std;

int c[3],n,m;
char s;

int main(){_
    cin >> n >> s;
    c[s-'A'] = 1;
    while (n--){
        cin >> m;
        --m;
        swap(c[m],c[(m+1)%3]);
    }
    if (c[0]) cout << 'A' << endl;
    if (c[1]) cout << 'B' << endl;
    if (c[2]) cout << 'C' << endl;
    return 0;
}
