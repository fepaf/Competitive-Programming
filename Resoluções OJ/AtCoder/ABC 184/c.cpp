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


int f(int xa, int ya, int xb, int yb){
    if (xa==xb && ya==yb){
        return 0;
    }
    else if (xa+ya==xb+yb || xa-ya==xb-yb || abs(xa-xb)+abs(ya-yb)<=3){
        return 1;
    } else if(((xa+ya)&1) == ((xb+yb)&1)){
        return 2;
    } else {
        return -1;
    }
}

int xa, xb, ya, yb, ans, xc, yc, xd, yd;

int main(){_
    cin >> xa >> ya >> xb >> yb;
    if (~f(xa,ya,xb, yb)){
        cout << f(xa,ya,xb, yb) << endl;
    }
    else {
        ans = 3;
        for(int i=-3; i<3; ++i){
            for(int j=-3; j<3; ++j){
                xc = xa+i; yc=ya+j;
                if (abs(xa-xc)+abs(ya-yc)<=3 && (~f(xc,yc,xb,yb))){
                    ans = min(ans, f(xc,yc,xb,yb)+1);
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
