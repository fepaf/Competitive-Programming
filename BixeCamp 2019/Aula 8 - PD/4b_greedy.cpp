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
#define rep(i,a,b) for (int (i)=(a); (i)<=(b); ++(i))
#define repi(i,a,b) for (int (i)=(a); (i)>=(b); --(i))

using namespace std;

int sumtime, d;
int mintime[MAX], maxtime[MAX];
int smin, smax;

int main(){_
    cin >> d >> sumtime;

    for (int i=0; i<d; ++i){
        cin >> mintime[i] >> maxtime[i];
        smin += mintime[i];
        smax += maxtime[i];
    }

    if (smin <= sumtime && sumtime <= smax){
        cout << "YES" << endl;
        int left = sumtime - smin;
        for (int i=0; i<d; ++i){
            int extra = min(maxtime[i]-mintime[i], left);
            cout << mintime[i] + extra << ' ';
            left -= extra;
        }
        cout << endl;
    }
    else {
        cout << "NO" << endl; 
    }
	return 0;
}
