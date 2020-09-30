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

int n, g[MAX], s[MAX], m;
queue<int> fila;
int a, b;
set<ii> edges;

int main(){_
    cin >> n;
    for (int i=0; i<n; ++i){
        cin >> g[i] >> s[i];
        if (g[i]==1){
            fila.push(i);
        }
    }
    while (!fila.empty()){
        int u = fila.front(); fila.pop();
        a = u; b = s[u];
        edges.insert({min(a,b),max(a,b)});
        if (g[b] > 1){
            --g[b];
            s[b] ^= a;
            if (g[b] == 1){
                fila.push(b);
            }
        }
    }
    cout << sz(edges) << endl;
    for (ii p : edges){
        cout << p.fs << ' ' << p.sc << endl;
    }
    return 0;
}