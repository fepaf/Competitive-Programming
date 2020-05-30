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

int h,p,f,d,a[1<<4];

int main(){_
    cin >> h >> p >> f >> d;
    a[h] = 1; a[p] = -1;
    for (int i=0; i<16; ++i){
        if (a[f]){
            cout << (a[f]==1 ? 'S' : 'N') << endl;
            return 0;
        }
        f = (f+d+160)%16;
    }
}
