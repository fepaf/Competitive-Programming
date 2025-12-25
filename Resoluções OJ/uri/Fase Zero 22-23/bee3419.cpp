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

i64 n, v, m, s, ms, t, fast, pfast;
char c;

struct tpiloto{
    i64 p, tot, fast, pfast;
};

tpiloto plts[MAX];

bool cmp1(tpiloto a, tpiloto b){
    return a.tot < b.tot;
}

bool cmp2(tpiloto a, tpiloto b){
    if (a.fast == b.fast) return a.pfast < b.pfast;
    return a.fast < b.fast;
}

int main(){_
    cin >> n >> v;
    fast = INF;
    pfast = v+1;
    for (int i=n; i--;){
        cin >> plts[i].p;
        plts[i].tot = 0;
        plts[i].fast = INF;
        for (int j=0; j<v; ++j){
            cin >> m >> c >> s >> c >> ms;
            t = m;
            t = t*60+s;
            t = t*1000+ms;
            plts[i].tot += t;
            if (t < plts[i].fast) {
                plts[i].fast = t;
                plts[i].pfast = j;
            }
            if (t < fast){
                fast = t;
                pfast = j;
            }
        }
    }
    sort(plts, n, cmp1);
    sort(plts, 10, cmp2);
    for (int i=0; i<10; ++i){
        if (plts[i].fast == fast){
            cout << plts[i].p << endl;
            return 0;
        }
    }
    cout << "NENHUM" << endl;
    return 0;
}
