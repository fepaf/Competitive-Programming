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

int c, v;
int a[1<<7][1<<7];
int x, y, m;

int main(){_
    cin >> c >> v;
    while (v--) {
        cin >> x >> y;
        for (int i=-1; i<=1; ++i){
            for (int j=-1; j<=1; ++j){
                a[x+i][y+j] = 1;
            }
        }
    }
    cin >> m;
    while (m--){
        cin >> x >> y;
        if (a[x][y]){
            cout << "Nao" << endl;
            continue;
        }
        for (int i=-1; i<=1; ++i){
            for (int j=-1; j<=1; ++j){
                a[x+i][y+j] = 1;
            }
        }
        cout << "Sim" << endl;
    }
    return 0;
}
