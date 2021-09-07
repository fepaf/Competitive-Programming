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
// #define gcd(x,y) __gcd((x),(y))
#define esq(x) (x<<1)
#define dir(x) ((x<<1)|1)
#define W(x) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;

using namespace std;

/*
Encontra x e y tal que Ax+By=mdc(A,B) e |x|+|y| é mínimo
*/

struct tripla{
    i64 x, y, mdc;
};

tripla ee(i64 a, i64 b){
    if (b==0){
        return {1,0,a};
    }
    tripla t = ee(b, a%b);
    return {t.y, t.x-(a/b)*t.y, t.mdc};
}

i64 a, b, c, k;

int main(){_
    cin >> a >> b >> c;
    tripla ans = ee(a,b);
    i64 mdc = ans.mdc;
    if (c % mdc){
        cout << -1 << endl;
        return 0;
    }
    k = c / mdc;
    a /= k , b /= k;
    ans.x *= k;
    ans.y *= k;
    cout << 1 << endl << (ans.x) << " " << (ans.y) << endl;
    return 0;
}
