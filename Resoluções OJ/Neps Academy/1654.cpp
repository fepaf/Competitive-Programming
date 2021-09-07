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

int vis, gab;
string s;

int main(){_
    gab = (1<<26)-1;
    gab &= ~(1<<('k'-'a'));
    gab &= ~(1<<('w'-'a'));
    gab &= ~(1<<('y'-'a'));
    getline(cin, s);
    for (char c : s){
        if ('a'<=c && c<='z'){
            vis |= (1<<(c-'a'));
        }
    }
    cout << (vis == gab ? 'S' : 'N') << endl;
    return 0;
}
