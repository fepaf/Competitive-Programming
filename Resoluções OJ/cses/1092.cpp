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
Problem: Two Sets
Link: https://cses.fi/problemset/task/1092
*/
 
i64 n, vis[MAX], half;


int main(){_
    cin >> n;
    int m = n-1;
    if (!((m&3)>>1)){
        cout << "NO" << endl;
        return 0;
    }
    cout<< "YES" << endl;

    i64 sum = 0, i;
    half = ((n*(n+1))>>2);
    for (i=n; i>=1; --i){
        if (sum + i > half){
            break;
        }
        vis[i] = 1;
        sum += i;
    }
    i64 left = half-sum; 
    vis[left] = 1;

    cout << n-i+(!!left) << endl;
    for (int j=n; j>i; --j){
        cout << j << ' ';
    }
    if (left) cout << left;
    cout << endl;
    
    cout << i-(!!left) << endl;
    for (int j=1; j<=i; ++j){
        if (!vis[j]) cout << j << ' ';
    } 
    cout << endl;


    return 0;
}
