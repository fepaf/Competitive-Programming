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

int n, m, k, a[MAX], x;

/*
x = x^y
y = (x^y)
x = x^y = 
*/

int main(){_
    while ((cin >> n >> m >> k) && (n||m||k)){
        
        for (int i=0; i<n; ++i){
            cin >> a[i];
        }

        // for (int k=0; k<m; ++k){
        //     for (int i=0; i<n+1; ++i){//wxor
        //         x = 0;
        //         for (int j=0; j<n; ++j){
        //             x^=a[j];
        //         }
        //         a[i%n] = x;
        //     }
        //     for (int i=0; i<n; ++i){
        //         cout << a[i] << ' ';
        //     }
        //     cout << endl;
        // }

        cout << a[(k-1-m%n + n)%n] << endl;
    }
    return 0;
}
