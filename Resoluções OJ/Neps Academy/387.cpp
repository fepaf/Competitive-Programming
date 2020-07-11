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

int ans, f, r;
vi x, d;
queue<int> fila;

int main(){_
    cin >> f >> r;
    x = vi(r);
    d = vi(f+1,-1);
    for (int &xi : x){
        cin >> xi;
        fila.push(xi);
        d[xi] = 0;
    }
    while (!fila.empty()){
        int u = fila.front(); fila.pop();

        ans = max(ans, d[u]);

        if (1<=u+1 && u+1<=f && d[u+1]==-1){
            fila.push(u+1);
            d[u+1] = d[u]+1;
        }
        if (1<=u-1 && u-1<=f && d[u-1]==-1){
            fila.push(u-1);
            d[u-1] = d[u]+1;
        }
    }
    cout << ans << endl;
    return 0;
}
