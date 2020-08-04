#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<20)
#define MOD 1000000007
#define i64 long long
#define all(x) (x).begin(),(x).end()
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

int n=8, b[1<<3], ok;

int main(){_
    for (int i=n; i--;){
        cin >> b[i];
    }
    sort(b,b+n);
    do{
        ok = 1;
        for (int i=n-1; i--;){
            ok &= (b[i]!=b[i+1]);
        }
        if (ok){
            cout << 'S' << endl;
            return 0;
        }
    }while(next_permutation(b,b+n));
    cout << 'N' << endl;
    return 0;
}