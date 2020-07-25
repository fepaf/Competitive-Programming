#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define W(x) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;
#define i64 long long
#define INF 0x3f3f3f3f
#define MAX (1<<20)
#define sz(x) (int)((x).size())
#define ii pair<int, int>
#define fs first
#define sc second
#define vi vector<int>
#define vii vector<ii>
#define eb emplace_back
#define pb push_back

using namespace std;

int n, m, ans, si, ri, menor, l[MAX], p, j;
map<int, int> pos;
multiset<int> s;
multiset<int>::iterator it;
set<int> vis;

//WA

int main(){_
    scanf("%i %i", &n, &m);
    for (int i=1; i<=n; ++i){
        scanf("%i",&si);
        pos[si] = i;
    }
    // menor = min(n, m);
    // l[0] = -INF;
    // for (int i=1; i<=menor; ++i){
    //     l[i] = INF;
    // }
    while (m--){
        scanf("%i",&ri);
        if (!pos.count(ri)) continue;
        p = pos[ri];
        // W(p)
        s.insert(p);
        it = s.lower_bound(p);
        it++;
        if (it != s.end()){
            s.erase(it);
        }
        // j = upper_bound(l, l+ menor+1, p) - l;
        // if (l[j-1] < p && p < l[j]){
        //     l[j] =  p;
        //     ans = max(ans, j);
        // }
    }
    printf("%i\n",sz(s));
    return 0;
}
