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

int n, m, x, l, large, p, z, ans;

int main(){_
    cin >> n >> m;
    ans = 1; large = -1;
    for (int i=0; i<n; ++i){
        z = 1;
        l = 0; 
        for (int j=0; j<m; ++j){
            cin >> x;
            if (!x && z){
                ++l;
            } else{
                z = 0;
            }
        }
        large = (l==m && large==m ? large-1 : large);
        if (l > large){
            large = l;
        } else{
            ans = 0;
        }
    }
    cout << (ans ? 'S' : 'N') << endl;
    return 0;
}