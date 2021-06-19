#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#ifdef ONLINE_JUDGE
#define endl '\n'
#endif
#define INF 0x3f3f3f3f
#define MAX (1<<10)
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
Problem: Counting Rooms
Link: https://cses.fi/problemset/task/1192
*/
 
int n, m, vis[MAX][MAX], d[]={-1,0,1,0}, ans;
char tab[MAX][MAX];

int dentro(int i, int j){
    return 0<=i && i<n && 0<=j && j<m;
}

int ff(int i, int j){
    
    vis[i][j] = ans;

    for (int k=4; k--;){
        int a=i+d[k], b=j+d[3-k];

        if (!vis[a][b] && dentro(a,b) && tab[a][b]=='.'){
            ff(a,b);
        }
    }
}

int main(){_
    cin >> n >> m;
    for (int i=0; i<n; ++i){
        for (int j=0; j<m; ++j){
            cin >> tab[i][j];
        }
    }
    for (int i=0; i<n; ++i){
        for (int j=0; j<m; ++j){
            if (!vis[i][j] && tab[i][j]=='.'){
                ++ans;
                ff(i,j);
            }
        }
    }
    cout << ans << endl;
    return 0;
}
