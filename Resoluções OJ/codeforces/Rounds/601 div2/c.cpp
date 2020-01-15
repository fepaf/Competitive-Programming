#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (100123)
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

int n;
int q[MAX][3];
vi idx[MAX];
vi ans;

int main(){_
    cin >> n;
    for (int i=0; i<n-2; ++i){
        for (int j=0; j<3; ++j){
            cin >> q[i][j];
            idx[q[i][j]].eb(i);
        }
    }
    for (int i=1; i<=n; ++i){
        if (sz(idx[i])==1){
            ans.eb(i);
            break;
        }
    }
    int x = ans[0];
    for (int i=n-2;i--; ){
        if (q[i][0] == x || q[i][1] == x || q[i][2] == x){
            for (int y : q[i]){
                if (sz(idx[y])==2){
                    ans.eb(y);
                }
                else if(sz(idx[y])==3){
                    ans.eb(y);
                }
            }
        }
    }
    if (sz(idx[ans[1]]) > sz(idx[ans[2]]) ) swap(ans[1], ans[2]);
    
    set<int> its;
    for (int i=3; i<n; ++i){
        for (int x : idx[ans[i-2]]){
            for (int y : idx[ans[i-1]]){
                if (x==y) its.insert(x);
            }
        }
        int prox= ans[i-3];
        for (auto x : its){
            for (auto y : q[x]){
                prox ^= y;
            }
        }
        ans.eb(prox);
        its.clear();
    }

    for (int x : ans){
        cout << x << ' ';
    }
    cout << endl;

	return 0;
}
