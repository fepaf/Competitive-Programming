#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define i64 long long
#define INF 0x3f3f3f3f
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



int y,x,t;

int main(){_
    for (cin >> t; t--;){
        cin >> y >> x;
        cout << ((y*100)/(100+x)) << endl;
    }
	return 0;
}
