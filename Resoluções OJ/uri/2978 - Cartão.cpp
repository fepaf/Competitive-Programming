#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define INF 0x3f3f3f3f
#define MAX (1<10)
#define MOD 1000000007
#define i64 unsigned long long
#define all(x) (x).begin() , (x).end()
#define sz(x) (int)(x).size()
#define ii pair<int, int>
#define fs first
#define pi 2*acosl(0.0)
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

i64 a,b,c,d,me,ma;

int main(){_
    cin >> a >> b >> c >> d;
    me = min(a,b);
    ma = max(a,b);
    a = me; b = ma;
    me = min(c,d);
    ma = max(c,d);
    c = me; d = ma;
    if (a>c) cout << "no\n";
    else if (a<=c and b<=d) cout << "yes\n";
    else if (a<=c and b>d and a*a+b*b>c*c+d*d) cout << "no\n";
    else if (a<=c and b>d and a*a+b*b<=c*c+d*d){
        i64 dc = a*a+b*b;
        long double x = (c-sqrt(dc-d*d));
        long double y = (d-sqrt(dc-c*c));
        if (x*x+y*y >= 4*a*a) cout << "yes\n";
        else cout << "no\n";
    }
    return 0;
}
