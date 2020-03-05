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

int n, a, b, c;
int t[MAX];

int main(){_
    cin >> n;
    for (int i=n; i--;){
        cin >> t[i];
    }
    sort(t, t+n);
    int ans = 0;
    for (int i=0; i<n; ++i){
        a = t[i];
        for (int j=i+1; j<n; ++j){
            b = t[j];
            for (int k=j+1; k<n; ++k){
                c = t[k];
                ans |= ((a!=b && b!=c && c!=a) && (b-a<3 && c-a<3 && c-b<3));
            }
        }
    }
    cout << (ans ? "YES" : "NO") << endl;
    return 0;
}
