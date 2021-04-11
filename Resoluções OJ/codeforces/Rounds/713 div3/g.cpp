#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (int)((1e7)+10)
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

int t, n, c, sd[MAX], ans[MAX];

void crivo(){
    for (int i=MAX; i--;){
        sd[i] = 1;
        ans[i] = -1;
    }
    int i;
    for (i=2; i<MAX; ++i){
        for (int j=i; j<MAX; j+=i){
            sd[j] += i;
        }
    }
    for (int i=1; i<MAX; ++i){
        if (sd[i]<MAX && ans[sd[i]]==-1){
            ans[sd[i]] = i;
        }
    }
}

int main(){_
    crivo();
    for (cin >> t; t--;){
        cin >> c;
        cout << ans[c] << endl;
    }
    return 0;
}
