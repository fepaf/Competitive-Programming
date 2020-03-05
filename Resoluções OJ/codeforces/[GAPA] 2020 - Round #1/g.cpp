#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<11)
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

int h[MAX][MAX];
char c[] = {'*','+'};
int n;

int main(){_
    h[0][0] = 1;
    for (int l=1; l<10; ++l){
        int k = (1<<l);
        for (int i=0; i<k; ++i){
            for (int j=0; j<k; ++j){
                h[i][j+k] = h[i+k][j] = h[i][j];
                h[i+k][j+k] = 1^h[i][j];
            }
        }
    }
    cin >> n;
    for (int i=0; i<(1<<n); ++i){
        for (int j=0; j<(1<<n); ++j){
            cout << c[h[i][j]];
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}
