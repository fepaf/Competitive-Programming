#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<10)
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

double x, y, r, xq, yq, rq;
i64 ans;

int main(){_
    cin >> x >> y >> r;
    xq = x-((int)x);
    yq = y-((int)y);
    rq = r-((int)r);
    for (int xi=1; xi<=r; ++xi){
        ans += ((int)(r*r-(xi+xq)*(xi+xq)));
    }
    return 0;
}
