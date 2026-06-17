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

struct tpoint{
    int x, y;
} nv, cur, p;



int n, grid[102][102];
string s;

int main(){_
    cin >> n;
    while (n--){
        cin >> p.x >> p.y;
        grid[p.y][p.x] = 1;
    }
    cur = {0,0};

    cin >> s;
    for (char c : s){
        nv = cur;
        if (c == 'F') ++nv.y;
        if (c == 'T') --nv.y;
        if (c == 'D') ++nv.x;
        if (c == 'E') --nv.x;
        
        if (nv.x<0 || nv.x>99 || nv.y<0 || nv.y>99 || grid[nv.y][nv.x]) continue; 
        
        cur = nv;
    }
    cout << cur.x << " " << cur.y << endl;
    return 0;
}
