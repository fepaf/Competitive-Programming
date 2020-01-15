#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<20)
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

string s,t;

int main(){_
    cin >> s >> t;
    int t1 = s.size();
    int t2 = t.size();
    int x = 0;
    for (int i=1; i<=min(t1,t2); ++i){
        if (s[t1-i]==t[t2-i]){
            x++;
        }
        else break;
    }
    cout << (t1+t2-2*x) << endl;
	return 0;
}
