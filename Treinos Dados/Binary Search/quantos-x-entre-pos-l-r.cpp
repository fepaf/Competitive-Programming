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

/*
Problema: Dado array A[1..N] , N até 10a5, e A[i] até 10a9, responda Q consultas do tipo "Quantas
vezes X aparece entre as posições L e R do vetor"
*/

int a[MAX];
int l, r, x, q, n, lb, ub;
map<int, vi> pos;

int main(){_
    cin >> n;
    for (int i=0; i<n; ++i){
        cin >> a[i];
        pos[ a[i] ].eb(i);
    }
    cin >> q;
    while (q--){
        cin >> l >> r >> x;
        lb = lower_bound(pos[x].begin(), pos[x].end(), l) - pos[x].begin();
        ub = upper_bound(pos[x].begin(), pos[x].end(), r) - pos[x].begin();
        cout << ub-lb << endl;
    }
    return 0;
}
