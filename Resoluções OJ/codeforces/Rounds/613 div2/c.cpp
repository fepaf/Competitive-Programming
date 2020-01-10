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

i64 x;
i64 menor, a, b, par;
vector<i64> dvo;

int main(){_
    cin >> x;
    for (i64 a=1; a*a<=x; ++a){
        if (x%a==0){
            b = x/a;
            dvo.eb(a);
            dvo.eb(b);
        }
    }
    
        int t = sz(dvo);
        menor = x;
        for (int i=0; i<t; ++i){
            for (int j=i+1; j<t; ++j){
                i64 a = dvo[i];
                i64 b = dvo[j];
                if ((a/gcd(a,b))*b == x){
                    menor = min(menor, max(a,b));
                    par = min(a,b);
                }
            }
        }
        cout << par << ' ' << menor << endl;
	return 0;
}
        int t = sz(dvo);
