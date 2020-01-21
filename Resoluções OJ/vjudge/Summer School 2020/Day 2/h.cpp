#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<19)
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
#define DEBUG 0

using namespace std;

struct rect{
    int l,r,b,t;
};

rect intersection(rect a, rect b){
    return {max(a.l, b.l), min(a.r, b.r), max(a.b, b.b), min(a.t, b.t)};
}

int valid(rect a){
    return (a.l<=a.r && a.b<=a.t);
}

int n;
rect r[MAX], it;
rect neutro = {INT_MIN,INT_MAX,INT_MIN,INT_MAX};
rect pref[MAX], suf[MAX];

int main(){_
    cin >> n;
    pref[0] = suf[n+1] = neutro;
    for (int i=1; i<=n; ++i){
        cin >> r[i].l >> r[i].b >> r[i].r >> r[i].t; 
        pref[i] = intersection(pref[i-1], r[i]);
    }
    for (int i=n; i>=1; --i){
        suf[i] = intersection(r[i],suf[i+1]);
        it = intersection(pref[i-1],suf[i+1]);
        if (valid(it)){
            break;
        }
    }
    cout << it.l << " " << it.b << endl;
	return 0;
}
