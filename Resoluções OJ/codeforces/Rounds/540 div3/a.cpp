#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define i64 long long
#define INF 0x3f3f3f3f
#define VISITED 1
#define UNVISITED -1
#define MAX (1<<20)
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define vvi vector<vi>
#define eb emplace_back
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define lsb(x) (x & -x)

using namespace std;



i64 n, a,b,q;

int main(){_
    for (cin >> q;q--;){
        cin >> n >> a >> b;
        if (2*a<=b){
            cout << n*a << endl;
        }
        else {
            cout << ((n>>1LL)*b)+(n&1LL)*a << endl;
        }
    }

	return 0;
}
