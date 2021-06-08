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
Problem: Maximum Building I
Link: https://cses.fi/problemset/task/1147
*/
 
int n, m, d[MAX][MAX], ans;
char c;
stack<ii> pilha;

void f(int hi, int i){
    int left = i;
    
    while (!pilha.empty() && pilha.top().fs > hi){
        auto [hj, j] = pilha.top(); pilha.pop();
        ans = max(ans, hj*(i-j));
        left = j;
    }
    pilha.push({hi, left});
}

int main(){_
    cin >> n >> m;
    for (int i=1; i<=n; ++i){
        for (int j=1; j<=m; ++j){
            cin >> c;
            d[i][j] = (c == '*' ? 0 : d[i-1][j]+1);
        }
    }

    for (int i=1; i<=n; ++i){
        for (int j=1; j<=m+1; ++j){
            f(d[i][j], j);
        }
    }
    cout << ans << endl;
    return 0;
}
