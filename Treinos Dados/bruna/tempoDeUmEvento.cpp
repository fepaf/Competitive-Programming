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

int t1, d1, h1, m1, s1, t2, d2, h2, m2, s2;
string s;
char c;

int main(){_
    cin >> s >> d1;
    cin >> h1 >> c >> m1 >> c >> s1;

    cin >> s >> d2;
    cin >> h2 >> c >> m2 >> c >> s2;

    t1 = s1+m1*60+h1*60*60+d1*24*60*60;
    t2 = s2+m2*60+h2*60*60+d2*24*60*60;

    int t = t2-t1;

    int w = t/(24*60*60);
    t %= (24*60*60);

    int x = t/(60*60);
    t %= (60*60);

    int y = t/(60);
    t %= 60;

    int z = t/1;

    cout << w << " dia(s)" << endl;
    cout << x << " hora(s)" << endl;
    cout << y << " minuto(s)" << endl;
    cout << z << " segundo(s)" << endl;

    return 0;
}
