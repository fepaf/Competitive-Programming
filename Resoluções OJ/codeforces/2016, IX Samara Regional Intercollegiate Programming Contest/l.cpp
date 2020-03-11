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

int n;
int a[2][MAX];
int wa, wb, win;

int w(int x, int i, int j){
    if (i==n || j==n) return 0;
    if (a[x][i] > a[x^1][j]) return 1 + w(x, i+1, j+1);
    return w(x, i+1, j);
}

int main(){_
    cin >> n;
    for (int i=0; i<n; ++i){
        cin >> a[0][i];
    }
    for (int i=0; i<n; ++i){
        cin >> a[1][i];
    }
    sort(a[0], a[0]+n);
    sort(a[1], a[1]+n);
    win |= ((w(0, 0, 0) > n/2) << 0);
    win |= ((w(1, 0, 0) > n/2) << 1);
    if (win == 3) cout << "Both" << endl;
    if (win == 2) cout << "Second" << endl;
    if (win == 1) cout << "First" << endl;
    if (win == 0) cout << "None" << endl;
    return 0;
}
