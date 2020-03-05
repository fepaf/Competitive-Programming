    #include<bits/stdc++.h>
    #define _ ios_base::sync_with_stdio(0);
    #define endl '\n'
    #define INF 0x3f3f3f3f
    #define MAX (1<<5)
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
     
    int n, q;
    vi adj[MAX];
    string a;
    char b;
     
    queue<ii> fila;
     
    int main(){_
        cin >> n >> q;
        for (int i=q; i--;){
            cin >> a >> b;
            adj[b-'a'].eb(a[0]-'a');
        }
        int ans = 0;
        fila.push({0,1});
        while (!fila.empty()){
            ii p = fila.front(); fila.pop();
            int u = p.fs, d = p.sc;
            if (d == n){
                ans++;
            }
            else{
                for (int v : adj[u]){
                    fila.push({v, d+1});
                }
            }
        }
        cout << ans << endl;
        return 0;
    }