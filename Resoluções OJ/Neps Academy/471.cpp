#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<20)
#define MOD 1100000007
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

using namespace std;

int j,p,v,e,d;

int main(){_
    cin >> j >> p >> v >> e >> d;
    for (int i1=(~j ? j : 1); i1<=(~j ? j : 100); ++i1){
        for (int i2=(~p ? p : 0); i2<=(~p ? p : 300); ++i2){
            for (int i3=(~v ? v : 0); i3<=(~v ? v : 100); ++i3){
                for (int i4=(~e ? e : 0); i4<=(~e ? e : 100); ++i4){
                    for (int i5=(~d ? d : 0); i5<=(~d ? d : 100); ++i5){
                        if (i1 == i3+i4+i5 && i2 == 3*i3+i4){
                            cout << i1 << ' ' << i2 << ' ' << i3 << ' ' << i4 << ' ' << i5 << endl;
                            return 0;
                        }
                    }
                }
            }
        }
    }
}
