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

int t, n, q[MAX];
set<int> me, ma;
queue<int> fila;

int main(){_
    for (cin >> t; t--;){
        cin >> n;
        for (int i=0; i<n; ++i){
            cin >> q[i];
            me.insert(i+1);
            ma.insert(i+1);
        }
        for (int i=0; i<n; ++i){
            auto it = me.lower_bound(q[i]);
            if (q[i] != (*it)) it = me.begin();
            cout << (*it) << ' ';
            me.erase(it);
        }
        cout << endl;
        for (int i=0; i<n; ++i){
            auto it = ma.lower_bound(q[i]);
            if (q[i] != (*it)) it--;
            cout << (*it) << ' ';
            ma.erase(it);
        }
        cout << endl;
    }
    return 0;
}
