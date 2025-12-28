#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#ifdef ONLINE_JUDGE
#define endl '\n'
#endif
#define INF 0x3f3f3f3f
#define MAX (1<<20)
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

/*
Problem: K Subset Xors
Link: https://cses.fi/problemset/task/3192
*/
 

struct linearBasis
{
    vi b;
    
    void insert (int mask){
        for (int bi : b){
            mask = min(mask, mask^bi);
        }
        if (mask){
            b.eb(mask);
            sort(b.rbegin(), b.rend());
        }
    }
    
    int dim(){
        return sz(b);
    }
    
    void rebuild(){
        sort(b.rbegin(), b.rend());
        
        for (int i=0; i<sz(b); ++i){
            for (int j=i+1; j<sz(b); ++j){
                b[i] = min(b[i], b[i]^b[j]);
            }
            W(b[i])
        }
        
        sort(b.begin(), b.end());
    }
    
    int kth(int k){
        if (k >= (1<<sz(b))) return -1;
        
        int ans = 0;
        for (int i=0; i<sz(b); ++i){
            if ((1<<i) & k) ans ^= b[i];
        }
        return ans;
    }
};

int n, xi, ans, k, mult;
linearBasis lb;

int main(){_
    cin >> n >> k;
    for (int i=n; i--;){
        cin >> xi;
        lb.insert(xi);
    }

    lb.rebuild();

    mult = (1<<(min(n-lb.dim(), 30)));
    int mask = 0;
    for (int i=0; i<k;){

        for (int j=0; j<mult; ++j){
            cout << lb.kth(mask) << " ";
            if (++i == k) break;
        }
        mask++;
    }

    cout << endl;

    return 0;
}
